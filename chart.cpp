#include "chart.h"
#include "ui_chart.h"
#include "common/util.h"
#include <QMessageBox>

chart::chart(Controller ctrl, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chart)
{
    ui->setupUi(this);

    this->ctrl = ctrl;

    //getting genre statistic
    vector<Movie> sorted = sortByGenre(ctrl.getItems());

    int i;
    for (i = 0; i < this->ctrl.getLength(); i++)
    {
        if (genres.size() > 0 && genres.back() != sorted[i].getGenre())
            genres.push_back(sorted[i].getGenre());

        else if (genres.size() == 0)
            genres.push_back(sorted[i].getGenre());
    }

    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->customPlot->setBackground(QBrush(gradient));

    // create empty bar chart objects:
    QCPBars *qty = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    qty->setAntialiased(false); // gives more crisp, pixel aligned bar borders
    qty->setStackingGap(1);
    // set names and colors:
    qty->setName("Genre");
    qty->setPen(QPen(QColor(0, 168, 140).lighter(130)));
    qty->setBrush(QColor(0, 168, 140));

    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    for (i = 1; i <= genres.size(); i++)
    {
        ticks << i;
        labels << QString::fromStdString(genres[i-1]);
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->customPlot->xAxis->setTicker(textTicker);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTicks(false);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->setRange(0, genres.size());
    ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->xAxis->setLabelColor(Qt::white);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, 6);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot->yAxis->setLabel("Number of movies");
    ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setLabelColor(Qt::white);
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    // Add data:
    QVector<double> qtyData;
    for (i = 0; i < genres.size(); i++)
    {
        string currentGenre = genres[i];
        int currentGenreCounter = 0;
        for (Movie mov: ctrl.getItems())
            if (mov.getGenre() == currentGenre)
                currentGenreCounter++;
        qtyData << currentGenreCounter;
    }
    //qtyData   << 0.06*10.5 << 0.05*5.5 << 0.04*5.5 << 0.06*5.8 << 0.02*5.2 << 0.07*4.2 << 0.25*11.2 << 0.5 *  22 << 0.07*4.2 << 0.25*11.2 ;
    qty->setData(ticks, qtyData);

    // setup legend:
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    ui->customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}

chart::~chart()
{
    delete ui;
}
