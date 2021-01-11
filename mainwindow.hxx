

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
