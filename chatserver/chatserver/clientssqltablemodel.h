#ifndef CLIENTSSQLTABLEMODEL_H
#define CLIENTSSQLTABLEMODEL_H

#include <QSqlTableModel>

class ClientsSqlTableModel : public QSqlTableModel
{
    Q_OBJECT
public:
    ClientsSqlTableModel(QObject * parent = 0, QSqlDatabase db = QSqlDatabase())
        : QSqlTableModel(parent,db) {};

    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const
    {
        QVariant value = QSqlQueryModel::data(index, role);

        if (role==Qt::DisplayRole &&
            index.column() == 3) {
            QString valStr = value.toString();
            bool ok;
            int valInt = valStr.toInt(&ok);
            if(ok) {
                switch(valInt){
                case 0:    return QVariant(QString("Активный"));
                case 1:    return QVariant(QString("Отключен"));
                case 2:    return QVariant(QString("Забанен"));
                default:   return QVariant(QString("Unknown type"));
                }
            }
        }

        return QSqlTableModel::data(index,role);
    }
};

#endif
