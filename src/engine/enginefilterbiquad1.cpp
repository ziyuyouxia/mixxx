#include <QLocale>
#include "engine/enginefilterbiquad1.h"

EngineFilterBiquad1Band::EngineFilterBiquad1Band(int sampleRate,
                                                 double centerFreq, double Q) {
    setFrequencyCorners(sampleRate, centerFreq, Q);
}

void EngineFilterBiquad1Band::setFrequencyCorners(int sampleRate,
                                                  double centerFreq, double Q) {
    QString specification = "BpBq/" + QLocale().toString(Q);
    setCoefs(qPrintable(specification), sampleRate, centerFreq);
}
