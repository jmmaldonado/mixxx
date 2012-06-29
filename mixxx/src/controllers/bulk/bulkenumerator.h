/**
* @file bulkenumerator.h
* @author Neale Pickett  neale@woozle.org
* @date Thu Jun 28 2012
* @brief Locate supported USB bulk controllers
*/

#ifndef BULKENUMERATOR_H
#define BULKENUMERATOR_H

#include "controllers/controllerenumerator.h"

class BulkEnumerator : public ControllerEnumerator {
  public:
    BulkEnumerator();
    virtual ~BulkEnumerator();

    QList<Controller*> queryDevices();

  private:
    QList<Controller*> m_devices;
};

#endif
