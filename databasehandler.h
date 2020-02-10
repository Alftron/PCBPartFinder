#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>


class DatabaseHandler
{
public:
    DatabaseHandler();
    QString sqlDriver();
    QString dbName();

private:
    const QString sqlDriver_ = "QSQLITE";
    const QString dbName_ = "base.db";
};

#endif // DATABASEHANDLER_H
