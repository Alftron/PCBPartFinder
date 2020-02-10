#include "databasehandler.h"

#include <QMessageBox>

DatabaseHandler::DatabaseHandler()
{
    // Check there's a driver before doing anything else!
    if (QSqlDatabase::isDriverAvailable(sqlDriver()))
    {
        // Add the database connection
        QSqlDatabase db = QSqlDatabase::addDatabase(sqlDriver());
        // Set the database name
        db.setDatabaseName(dbName());
        // Try and open the database, will create it if it doesn't exist
        if (db.open())
        {
            // Database opened
        }
        else
        {
            // Database not opened
            QMessageBox::warning(NULL, "Database Error", "Error opening database");
        }
    }
}

QString DatabaseHandler::sqlDriver()
{
    // Returns the SQL driver being used as a QString
    return this->sqlDriver_;
}

QString DatabaseHandler::dbName()
{
    // Returns the DB name as a QString
    return this->dbName_;
}
