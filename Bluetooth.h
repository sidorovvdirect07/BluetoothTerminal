#ifndef BLUETOOTH_H
#define BLUETOOTH_H

/*
 * Name:    BLE UART handler class
 * Author:  Todd Morehouse
 * Date:    July 19th, 2019
 *
 * This class abstracts Qt's BLE library for simple BLE UART Communication
 *
 * Simply specify the name of the device you wish to connect to then use the read and write
 * functions to communicate with the device.
 *
 * This class was designed to be used with the Adafruit BLE UART friend.
 *
 * Revision History
 *
 * * Date: July 19th, 2019 - Todd Morehouse
 *      Class was created.
 *
 *
 */

//Project includes
#include "Logger.h"

//Qt includes
#include <QObject>
#include <QString>

//Qt bluetooth includes
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothDeviceInfo>
#include <QBluetoothSocket>
#include <QLowEnergyController>
#include <QLowEnergyService>
#include <QLowEnergyCharacteristic>
#include <QLowEnergyDescriptor>
#include <QBluetoothUuid>

class Bluetooth : public QObject
{
    Q_OBJECT
public:
    explicit Bluetooth(QObject *parent = nullptr);
    ~Bluetooth();

    //Connection functions
    void refreshDeviceList();
    QStringList getDeviceList();

    QString getDeviceName();
    void setDeviceByName(QString device);

    //Reading functions
    QByteArray readAll();
    QString getLine(QString terminator);
    QStringList getAllLines(QString terminator);
    void clearBuffer();

    //Writing functions
    void write(QByteArray data);
    void write(const QString &data);
    void write(const char data[]);
    void write(QStringList data);
    void write(const char data);

signals:
    void dataAvailable();
    void deviceConnected();
    void deviceDisconnected();
    void deviceListAvailable();
    void deviceTransmitReady();

public slots:
    void connectToDevice();
    void connectToDevice(QString device);
    void disconnectFromDevice();

private:
    QList<QBluetoothDeviceInfo> discoveredDevices;
    QBluetoothDeviceInfo device;
    QByteArray dataBuffer;

    const QString UART_UUID             = "{0000fefb-0000-1000-8000-00805f9b34fb}"; //UART GATT UUID
    const QString UART_TX_UUID          = "{00000003-0000-1000-8000-008025000000}";//"{00000001-0000-1000-8000-008025000000}"; //UART TX Characteristic UUID
    const QString UART_RX_UUID          = "{00000004-0000-1000-8000-008025000000}";//"{00000002-0000-1000-8000-008025000000}"; //UART RX Characteristic UUID
    QLowEnergyController *m_control = nullptr;
    QLowEnergyService *service = nullptr;
    QBluetoothUuid UARTuuid = QBluetoothUuid(UART_UUID);
    QLowEnergyDescriptor m_notificationDesc;

    Logger *logger = nullptr;
    QString LogFilePath = "BluetoothDebug.txt";

    void logMessage(QString message);

private slots:
    void deviceDiscovered(const QBluetoothDeviceInfo &device);
    void serviceDiscovered(QBluetoothUuid uuid);
    void serviceScanDone();
    void handleDeviceConnection();
    void handleDeviceDisconnection();
    void handleServiceStateChange(QLowEnergyService::ServiceState state);
    void handleCharacteristicChange(QLowEnergyCharacteristic characteristic, QByteArray data);
    void handleDescriptorWrite(QLowEnergyDescriptor descriptor, QByteArray data);
    void handleError(QLowEnergyController::Error error);
    void handleServiceError(QLowEnergyService::ServiceError error);
};

#endif // BLUETOOTH_H
