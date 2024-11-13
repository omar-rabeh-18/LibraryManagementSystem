#include "filemanipulator.h"

filemanipulator::filemanipulator() {

}

void filemanipulator::users_files_reader()
{
    qDebug() << "In users_files_manipualtor"; //check if file is open

    QFile users_file(":/thefiles/csv files/users_info.csv");  //openeing the users file
    string line;
    int row = 0;
    if(!users_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "users files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "users files opened succefulyy";
    }

    QTextStream in(&users_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        std::vector<QString> row_data;
        for (const QString& cell : line.split(','))
        {
           row_data.push_back(cell);
        }

        the_user_data_vector.push_back(row_data);

    }

    users_file.close();

    for(auto row = the_user_data_vector.begin(); row != the_user_data_vector.end(); row++)
    {
        for(auto col= row->begin(); col != row->end(); col++)
        {
            qDebug() << *col << " ";
        }
        cout << endl;
    }

}

void filemanipulator::users_files_writer()
{
    QFile users_written("C:\\Users\\HP\\Desktop\\shit\\writtenusers.csv");

    if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "users written was succesfully opened";
    }

    QTextStream out(&users_written);

    // Write each row of the 2D vector to the CSV file
    for (const auto& row : the_user_data_vector) {
        QStringList rowData;
        for (const auto& cell : row) {
            rowData << cell;  // Collect cells in a QStringList for joining
        }
        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    users_written.close();

}

void filemanipulator::write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks)
{
    vector<QString> rowdata;
    rowdata.push_back(name);
    rowdata.push_back(password);
    rowdata.push_back(wishlistedbooks);
    rowdata.push_back(Borrowedbooks);
    the_user_data_vector.push_back(rowdata);
}


