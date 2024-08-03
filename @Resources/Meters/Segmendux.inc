;[LuaTween]
 Measure = Script
 ScriptFile = #@#LuaTween/Main.lua
 TweenGroup = Tweenable 
 Tween0 = Single | Variable | Angle | 0 | 180 | 5000
 Optional0 = Loop yoyo

[BarSegment1]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 25), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #Crust# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #Mantle# ; 0.5 | #Mantle# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = 3
 Y = 2
 Group = Tweenable

[Clock.IMG]
 Meter = Image
 ImageName = #@#Images/Clock2.png
 ImageTint = #Main#
 W = (2.1 * #Scale#)
 X = (1.5 * #Scale#)
 Y = (1.0 * #Scale#)

[Clock]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = #TF#
 X = (4.5 * #Scale#)
 Y = (0.25 * #Scale#)

[MeasureASec]
 Measure=Calc
 Formula=1-MeasureASec
 Substitute="0":"","1":":"
 UpdateDivider = 50

[Blinks]
 Meter = String
 MeasureName = MeasureASec
 MeterStyle = FontStyle
 X = (1.85 * #Scale#)r
 Y = (0.2 * #Scale#)

[Divider1]
 Meter = String
 Text = |
 MeterStyle = FontStyle 
 X = (10 * #Scale#)
 Y = (0.2 * #Scale#)

[Calendar.IMG]
 Meter = Image
 ImageName = #@#Images/Calendar2.png
 ImageTint = #Main#
 W = ([Clock.IMG:W])
 X = (11.5 * #Scale#)
 Y = ([Clock.IMG:Y])

[Calendar]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Date.Measure
 X = (14 * #Scale#)
 Y = ([Clock:Y])

[BarSegment2]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 8), (#Size# * 37), 4 |StrokeWidth 2 | Fill Color #Mantle# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #Crust# ; 0.5 | #Crust# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (91 * #Scale#)
 Y = ([BarSegment1:Y])
 Group = Tweenable

[Home]
 Meter = Image
 ImageName = #@#Images/Windows3.png
 W = (2.1 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1.1 * #Scale#)
 MouseOverAction = [!SetOption Home ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Home ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleConfig "Windux\Home\Home" "Home Mini.ini"]

[Rainfetch]
 Meter = Image
 ImageName = #@#Images/Terminal3.png
 ImageTint = #Main#
 W = (2.1 * #Scale#)
 X = (4 * #Scale#)r
 Y = (1.1 * #Scale#)
 MouseOverAction = [!SetOption Rainfetch ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Rainfetch ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Rainfetch" "Rainfetch.ini"]

[BarSegment3]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 20), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #Crust# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #Mantle# ; 0.5 | #Mantle# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (5 * #Scale#)r
 Y = ([BarSegment1:Y])
 Group = Tweenable

[Uptime.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Uptime
 Text = Uptime : %1
 X = (1 * #Scale#)r
 Y = ([Clock:Y])

[BarSegment4]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 20), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #Crust# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #Mantle# ; 0.5 | #Mantle# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (69 * #Scale#)
 Y = ([BarSegment1:Y])
 Group = Tweenable

[Active.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Active.Measure
 W = (#Scale# * 19.4)
 ClipString = 1
 Text =%1
 X = (1 * #Scale#)r
 Y = ([Clock:Y])
 FontSize = 1
 InLineSetting= Size | (1.1 * #Scale#)
 DynamicVariables=1

[BarSegment5]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 25), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #Crust# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #Mantle# ; 0.5 | #Mantle# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (165 * #Scale#)
 Y = ([BarSegment1:Y])
 Group Tweenable

[Discord]
 Meter = Image
 ImageName = #@#Images/Discord.png
 ImageTint = #Main#
 W = ([Clock.IMG:W])
 X = (166.5 * #Scale#)
 Y = ([Clock.IMG:Y])
 MouseOverAction = [!SetOption Discord ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Discord ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["%LOCALAPPDATA%\Discord\Update.exe" --processStart Discord.exe]

[WiFiBG]
 Meter = Image
 ImageName = #@#Images/WiFi100.png
 ImageTint = #Main#80
 W = ([Clock.IMG:W])
 X = (170 * #Scale#)
 Y = ([Clock.IMG:Y])

[WiFi.IMG]
 Meter = Image
 ImageName = #@#Images/WiFiOff.png
 ImageTint = #Main#
 W = ([Clock.IMG:W])
 X = (170 * #Scale#)
 Y = ([Clock.IMG:Y])

[Divider2]
 Meter = String
 Text = |
 MeterStyle = FontStyle 
 X = (173 * #Scale#)
 Y = (0.2 * #Scale#)

[Volume.IMG]
 Meter = Image
 ImageName = #@#Images/Volume2.png
 ImageTint = #Main#
 W = ([Clock.IMG:W])
 X = (175 * #Scale#)
 Y = ([Clock.IMG:Y])
 MouseOverAction = [!SetOption Volume.IMG ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Volume.IMG ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!CommandMeasure "Volume.Measure" "ToggleMute"][!UpdateMeasure Volume.Measure][!UpdateMeasure Vol.Measure][!UpdateMeter *][!Redraw]
 MouseScrollUpAction = [!CommandMeasure "Volume.Measure" "ChangeVolume 2"]
 MouseScrollDownAction = [!CommandMeasure "Volume.Measure" "ChangeVolume -2"]
 MouseActionCursorName = SIZE_NS

[Volume]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Vol.Measure
 X = (178 * #Scale#)
 Y = ([Clock:Y])

[Divider3]
 Meter = String
 Text = |
 MeterStyle = FontStyle 
 X = (181 * #Scale#)
 Y = (0.2 * #Scale#)

[Battery.IMG]
 Meter = Image
 ImageName = #@#Images/Battery2.png
 ImageTint = #Main#
 W = ([Clock.IMG:W])
 X = (183 * #Scale#)
 Y = ([Clock.IMG:Y])

[Battery]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Battery.Measure
 X = (186 * #Scale#)
 Y = ([Clock:Y])

;[Battery.LVL]
 Meter = Bar
 BarOrientation = Horizontal
 MeasureName = Battery.Measure
 W = (1.5 * #Scale#)
 H = (0.5 * #Scale#)
 BarColor = #Main#
 X = (180 * #Scale#)
 Y = 