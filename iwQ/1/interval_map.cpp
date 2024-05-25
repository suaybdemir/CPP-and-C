#include <iostream>
#include <map>
#include <string>

template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	std::map<K,V> m_map;
public:
	// constructor associates whole range of K with val
	interval_map(V const& val)
	: m_valBegin(val)
	{}

	typename std::map<K,V>::iterator begin()
	{
		return m_map.begin();
	}

	typename std::map<K,V>::iterator end()
	{
		return m_map.end();
	}

	// Assign value val to interval [keyBegin, keyEnd). 
	// Overwrite previous values in this interval.
	// Conforming to the C++ Standard Library conventions, the interval 
	// includes keyBegin, but excludes keyEnd. 

	void assign(K const& keyBegin, K const& keyEnd, V const& val) {

		if(m_map.begin() == m_map.end())
		{
			m_map.insert_or_assign(keyEnd,val);
			return;
		}
			
		if (!(keyBegin < keyEnd))
		{
			return ;
		}

		auto itBegin = m_map.lower_bound(keyBegin);
		auto itEnd = m_map.upper_bound(keyEnd);

		m_map.erase(itBegin,itEnd);
		
		for(auto i = keyBegin; i<keyEnd; ++i)
		{
			m_map.insert_or_assign(i, val);
		}
		m_map.insert_or_assign(keyEnd, val);
		
	}

	

	// look-up of the value associated with key
	V const& operator[]( K const& key ) const {
		auto it=m_map.upper_bound(key);
		if(it==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}
};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionality of
// the interval_map, for example using a map of int intervals to char.

template<typename T>
void print(T& t,const std::string& sep=" ")
{
  auto it = t.begin();
  while(it!= t.end())
  {
	auto m = it->first + 1;
    std::cout<< it->first << " " << it->second<< sep;
    ++it;
  }
  std::cout<<std::endl;
}


void IntervalMapTest()
{	
	interval_map<int,char>im('A');
	im.assign(1,1,'C');
	im.assign(2,3,'B');
	im.assign(4,5,'D');
	im.assign(6,7,'F');
	
    im.assign(8,12,'H');
	im.assign(13,14,'L');
	im.assign(15,18,'L');
	im.assign(19,21,'H');

    print(im,"\n");

}

int main(void)
{
    IntervalMapTest();
	return 0;
}
