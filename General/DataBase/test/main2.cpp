
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
  res = stmt->executeQuery("SELECT PersonID, Name FROM test ORDER BY PersonID ASC");
  
    res->afterLast();
    cout << "Person IDs and Names:" << endl;
    while (res->previous()) {
      cout << res->getInt(1) << " " << res->getString(2)<<endl;
    }

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