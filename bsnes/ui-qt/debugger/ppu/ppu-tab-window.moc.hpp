
class PpuTabWindow : public Window {
  Q_OBJECT

public:
  QVBoxLayout *layout;
  QTabWidget *tabWidget;
  QHBoxLayout *controlLayout;
  QCheckBox *autoUpdateBox;
  QPushButton *refreshButton;

  void autoUpdate();
  PpuTabWindow();

public slots:
  void refresh();
  void show();
};

extern PpuTabWindow *ppuTabWindow;