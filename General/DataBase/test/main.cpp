
#include <stdlib.h>
#include <iostream>

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;

int main(void)
{

try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;
  sql::PreparedStatement *pstmt;

  
  driver = get_driver_instance();
  con = driver->connect("tcp://127.0.0.1", "root", "ubuntu");
  con->setSchema("test");

  stmt = con->createStatement();
  //pstmt = con->prepareStatement("INSERT INTO test(Name)values(?)");
  //res = stmt->executeQuery("SELECT PersonID, FirstName FROM Persons");
  /*for(int i=0; i<1; i++)
  {
    cout<<"Write a Name"<<endl;
    string name;
    cin>>name;
    pstmt->setString(1,name);
    pstmt->executeUpdate();
  }*/

  stmt = con->execute("SELECT PersonID FROM test ORDER BY PersonID ASC");
  


 // res->afterLast();
  //while (res->previous())
  //cout << "\t... MySQL counts: " << res->getInt("PersonID") << endl;
 /* while (res->next()) {
    cout << res->getString(1) << " ";
    cout << res->getString(2) << endl;
  }*/
  delete res;
  delete stmt;
  delete con;

} catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line "  << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
}

cout << endl;

return EXIT_SUCCESS;
}