#pragma once

#include "Shared.h"

#include "NTFCDevice.h"

class TRICASTER_EXPORT TriCasterDevice : public NTFCDevice
{
    Q_OBJECT

    public:
        explicit TriCasterDevice(const QString& address, int port = 5950, QObject* parent = 0);

        void triggerAuto(const QString& target, const QString& speed, const QString& transition);
        void triggerTake(const QString& target);

        void switchProgramInput(const QString& target);
        void switchPreviewInput(const QString& target);

        void selectAudiomixerPreset(const QString& preset);


    protected:
        void sendNotification();
};