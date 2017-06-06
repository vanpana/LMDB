//
// Created by Panaite Dorinel on 24/05/2017.
//

#include "MovieTableModel.h"
using namespace std;

QVariant MovieTableModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();

    std::vector<Movie> genes = this->wlist->getArray();

    if (row < 0 || row >= genes.size())
        return QVariant{};

    Movie currentMovie = genes[row];

    if (role == Qt::DisplayRole || role == Qt::EditRole)
    {
        switch (col)
        {
            case 0:
                return QString::fromStdString(currentMovie.getTitle());
            case 1:
                return QString::fromStdString(currentMovie.getGenre());
            case 2:
                return QString::fromStdString(to_string(currentMovie.getLikes()));
        }
    }

//    if (role == Qt::FontRole)
//    {
//        QFont f{ "Times", 15, 10 };
//        return f;
//    }

//    if (row % 2 == 0)
//    {
//        if (role == Qt::BackgroundRole)
//        {
//            QBrush brush{ QColor{ Qt::green } };
//            return brush;
//        }
//    }

    return QVariant();
}

QVariant MovieTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal)
        {
            switch (section)
            {
            case 0:
                return QString{ "Name" };
            case 1:
                return QString{ "Genre" };
            case 2:
                return QString{ "Trailer" };
            default:
                break;
            }
        }
    }
//	if (role == Qt::FontRole)
//	{
//		QFont font("Times", 15, 10, true);
//		font.setBold(true);
//		font.setItalic(false);
//		return font;
//	}

    return QVariant{};

}

Qt::ItemFlags MovieTableModel::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEnabled | Qt::ItemIsEditable | Qt::ItemIsSelectable;
}

//bool MovieTableModel::setData(const QModelIndex &index, const QVariant &value, int role)
//{
//    if (!index.isValid() || role != Qt::EditRole)
//        return false;

//    // set the new data to the gene
//    int movieIndex = index.row();

//    vector<Movie> movies = this->wlist->getArray();
//    Movie currentMovie = movies[movieIndex];
//    switch (index.column())
//    {
//        case 0:
//            currentGene.setOrganismName(value.toString().toStdString());
//            break;
//        case 1:
//            currentGene.setName(value.toString().toStdString());
//            break;
//        case 2:
//            currentGene.setFunction(value.toString().toStdString());
//    }
//    this->repo.updateGene(movieIndex, currentGene);

//    // emit the dataChanged signal
//    emit dataChanged(index, index);

//    return true;
//}
