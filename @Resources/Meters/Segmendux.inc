;[LuaTween]
 Measure = Script
 ScriptFile = #@#LuaTween/Main.lua
 TweenGroup = Tweenable 
 Tween0 = Single | Variable | Angle | 0 | 180 | 5000
 Optional0 = Loop yoyo

[BarSegment1]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 25), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #C1# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #HC# ; 0.5 | #HC# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = 3
 Y = 2
 Group = Tweenable

[Clock.IMG]
 Meter = Image
 ImageName = #@#Images/Clock2.png
 ImageTint = #HC#
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
 ImageTint = #HC#
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
 Shape = Rectangle 0, 0, (#Scale# * 8), (#Size# * 37), 4 |StrokeWidth 2 | Fill Color #HC# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #C1# ; 0.5 | #C1# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (91 * #Scale#)
 Y = ([BarSegment1:Y])
 Group = Tweenable

[Home]
 Meter = Image
 ImageName = #@#Images/Home2.png
 ImageTint = #C1#
 W = (2.5 * #Scale#)
 X = (1 * #Scale#)r
 Y = (0.8 * #Scale#)
 MouseOverAction = [!SetOption Home ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Home ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleConfig "Windux\Home\Home" "Home Mini.ini"]

[Terminux]
 Meter = Image
 ImageName = #@#Images/Terminal3.png
 ImageTint = #C1#
 W = ([Clock.IMG:W])
 X = (4 * #Scale#)r
 Y = (0.9 * #Scale#)
 MouseOverAction = [!SetOption Terminux ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Terminux ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Terminux" "Terminux.ini"]

[BarSegment3]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 20), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #C1# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #HC# ; 0.5 | #HC# ; 1.0 
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
 Shape = Rectangle 0, 0, (#Scale# * 20), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #C1# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #HC# ; 0.5 | #HC# ; 1.0 
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

[Bands]
 Meter = Shape
 Shape =   Rectangle (((0.78*0))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band0]), 1 | Extend Style
 Shape2 =  Rectangle (((0.78*2))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band1]), 1 | Extend Style
 Shape3 =  Rectangle (((0.78*4))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band2]), 1 | Extend Style
 Shape4 =  Rectangle (((0.78*6))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band3]), 1 | Extend Style
 Shape5  = Rectangle (((0.78*8))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band4]), 1 | Extend Style
 Shape6  = Rectangle (((0.78*10))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band5]), 1 | Extend Style
 Shape7  = Rectangle (((0.78*12))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band6]), 1 | Extend Style
 Shape8  = Rectangle (((0.78*14))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band2]), 1 | Extend Style
 Shape9  = Rectangle (((0.78*16))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band1]), 1 | Extend Style
 Shape10 = Rectangle (((0.78*18))*#Scale#), ([Home:Y]+34), (1.5*#Scale#), (-25*[Band0]), 1 | Extend Style
 Style = Fill Color #C4# | StrokeWidth 0
 X = (2.2 * #Scale#)r
 Y = ([BarSegment4:Y]-10)
 AntiAlias = 1
 Hidden = 1
 DynamicVariables = 1

[BarSegment5]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 25), (#Size# * 37), 4 | StrokeWidth 2 | Fill Color #C1# | Stroke LinearGradient MyGradient
 MyGradient =   #Angle# | #HC# ; 0.5 | #HC# ; 1.0 
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = (165 * #Scale#)
 Y = ([BarSegment1:Y])
 Group Tweenable

[Discord]
 Meter = Image
 ImageName = #@#Images/Discord.png
 ImageTint = #HC#
 W = ([Clock.IMG:W])
 X = (166.5 * #Scale#)
 Y = ([Clock.IMG:Y])
 MouseOverAction = [!SetOption Discord ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Discord ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["%LOCALAPPDATA%\Discord\Update.exe" --processStart Discord.exe]

[WiFiBG]
 Meter = Image
 ImageName = #@#Images/WiFi100.png
 ImageTint = #HC#,100
 W = ([Clock.IMG:W])
 X = (170 * #Scale#)
 Y = ([Clock.IMG:Y])

[WiFi.IMG]
 Meter = Image
 ImageName = #@#Images/WiFiOff.png
 ImageTint = #HC#
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
 ImageTint = #HC#
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
 ImageTint = #HC#
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
 BarColor = #HC#
 X = (180 * #Scale#)
 Y = 