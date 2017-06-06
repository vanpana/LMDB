//
// Created by Panaite Dorinel on 24/05/2017.
//

#ifndef LMDB_MOVIETABLEMODEL_H
#define LMDB_MOVIETABLEMODEL_H


#include <QAbstractTableModel>
#include "tests/test_watchlist.h"
#include "repository/repository.h"

class MovieTableModel : public QAbstractTableModel
{
private:
    WatchList *wlist;

public:
    explicit MovieTableModel(QWidget *parent = 0) {}
    explicit MovieTableModel(WatchList *wlist, QWidget *parent = 0) { this->wlist = wlist; }
    ~MovieTableModel() {}

    // number of rows
    int rowCount(const QModelIndex &parent = QModelIndex{}) const override { return this->wlist->getArray().size(); };

    // number of columns
    int columnCount(const QModelIndex &parent = QModelIndex{}) const override { return 3; };

    // Value at a given position
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // add header data
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // will be called when a cell is edited
    //bool setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole) override;

    // used to set certain properties of a cell (to be able to edit)
    Qt::ItemFlags flags(const QModelIndex & index) const override;
};


#endif //LMDB_MOVIETABLEMODEL_H
