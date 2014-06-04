#pragma once

#include "updater.h"

#include <QString>

class WinSparkleUpdater : public Updater {
public:
  WinSparkleUpdater(const QString& url);
  ~WinSparkleUpdater();

  virtual void setAutomaticallyChecksForUpdates(bool automaticallyChecks);
  virtual bool automaticallyChecksForUpdates();
};
