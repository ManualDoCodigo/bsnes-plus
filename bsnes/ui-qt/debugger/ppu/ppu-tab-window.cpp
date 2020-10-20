#include "ppu-tab-window.moc"

PpuTabWindow *ppuTabWindow;

PpuTabWindow::PpuTabWindow() {
  setObjectName("ppu-tab-window");
  setWindowTitle("PPU");
  setGeometryString(&config().geometry.ppuTabWindow);
  application.windowList.append(this);

  layout = new QVBoxLayout;
  layout->setMargin(Style::WindowMargin);
  layout->setSpacing(Style::WidgetSpacing);
  setLayout(layout);

  tabWidget = new QTabWidget;
  tabWidget->addTab(tilemapViewer, "Tilemap");
  tabWidget->addTab(tileViewer, "Tile");
  tabWidget->addTab(oamViewer, "Sprite");
  tabWidget->addTab(cgramViewer, "Pallete");
  layout->addWidget(tabWidget);


  controlLayout = new QHBoxLayout;
  controlLayout->setAlignment(Qt::AlignRight);
  layout->addLayout(controlLayout);

  autoUpdateBox = new QCheckBox("Auto update");
  controlLayout->addWidget(autoUpdateBox);
  autoUpdateBox->setChecked(true);

  refreshButton = new QPushButton("Refresh");
  controlLayout->addWidget(refreshButton);

  connect(refreshButton, SIGNAL(released()), this, SLOT(refresh()));

}

void PpuTabWindow::refresh() {
    //fill
}

void PpuTabWindow::show() {
  Window::show();
  refresh();
}

void PpuTabWindow::autoUpdate() {
  
}