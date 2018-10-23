﻿/***********************************************************************************
**
** WeatherEffect.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/

#ifndef WEATHEREFFECT_H
#define WEATHEREFFECT_H

//Класс эффекта погоды
class CWeatherEffect
{
public:
    float SpeedX = 0.0f;
    float SpeedY = 0.0f;
    float X = 0.0f;
    float Y = 0.0f;
    uint ID = 0;
    float ScaleRatio = 0.0f;
    float SpeedAngle = 0.0f;
    float SpeedMagnitude = 0.0f;

    CWeatherEffect();
    virtual ~CWeatherEffect() {}
};

#endif
