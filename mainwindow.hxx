/*********************************Project Report********************************

Nano Compress

Name : Pinaki Das and Kushal Poddar
Subject : Object Oriented Programming
Supervised B
y :  Dr Mukesh Kumar Giluka,  Assistant Professor, CSE
Computer Science and Engineering
School of Engineering
Jawaharlal Nehru University
New Delhi 110067


Topic : Nano Compress  : A tool for compression using C++

Please find the link to the report here
https://docs.google.com/presentation/d/1tR-VtD5DP9qoRi20wdlXQgLjodeaWK1l1Uw-vz4shCw/edit?usp=sharing
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QDir>

#include <utility>
#include <chrono>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void currentInFileNameWatcher();
	void futureWatcherFinished();
	void futureWatcherStarted();
	void compressFutureWatcherFinished();
	void decompressFutureWatcherFinished();

	void browse();
	void compress();
	void decompress();
	void clear();
	void help();
	void about();
	void quit();

private:
	Ui::MainWindow *ui;
	QFutureWatcher<void> m_compressFutureWatcher;
	QFutureWatcher<void> m_decompressFutureWatcher;
	std::chrono::time_point<std::chrono::steady_clock> m_start;

	void perfomAction(int inv);

	std::pair<int, QString> getCurrentMethod();
	int isRegularFile(char const* path);
	int prepareInputFile(char const *inFileName, std::ifstream& inFile);
	int prepareOutputFile(char const *outFileName, std::ofstream& outFile);
};

#endif // MAINWINDOW_H
