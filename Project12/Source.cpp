#include <QtWidgets>

class MainWindow : public QMainWindow {
public:
	MainWindow();
};
MainWindow::MainWindow() {
	setFixedSize(700, 400);
	setWindowTitle("Test programm");
};


int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	MainWindow Win;
	Win.show();
	return app.exec();
}
