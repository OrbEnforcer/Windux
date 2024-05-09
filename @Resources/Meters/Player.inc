[FontStyle]
 FontFace = JetBrains Mono
 FontSize = (1.5*#Scale#)
 FontColor = #HC#
 StringAlign = Center
 AntiAlias = 1
 SolidColor = 0,0,0,1
 Padding = (9*#Scale#),0,0,0
 DynamicVariables = 1

;-------------------------------------------------------------------------;
;                                 BG                                      ; 
;-------------------------------------------------------------------------;

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0,  (35*#Scale#),  (45*#Scale#), 3 | Fill Color #C1# | StrokeWidth 2 | Stroke Color #HC#
 X = (2.5*#Scale#)
 Y = (1.3*#Scale#)

[Boundary1]
 Meter = Shape
 Shape = Rectangle 0, 0,  (32*#Scale#),  (42*#Scale#), 3 | Fill Color #C1#,1 | StrokeWidth 2 | Stroke Color #HC#
 X = (4*#Scale#)
 Y = (2.7*#Scale#)


;----------------------------------------------------------------------------;
;                                 PLAYER                                     ;
;----------------------------------------------------------------------------;

[CoverContainer]
 Meter = Shape 
 Shape = Rectangle 0,0, (18*#Scale#), (18*#Scale#),4 | Fill Color #HC#
 X = (10.7*#Scale#)
 Y = (6*#Scale#)

[Cover.IMG]
 Meter = Image
 MeasureName = Cover
 W = (18*#Scale#)
 H = (18*#Scale#)
 Container = CoverContainer
 PreserveAspectRatio = 1
 Group = On
 AntiAlias = 1

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 FontWeight = 600
 X = (15*#Scale#)
 Y = (25*#Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Group = On
 Text =  %1

[Artist.txt]
 Meter = String
 MeasureName = Artist
 MeterStyle = FontStyle
 FontSize = (1.2*#Scale#)
 FontWeight = 400
 X = (15*#Scale#)
 Y = (28*#Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Group = On
 Text =  %1

[Progress]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MProgress
 FontSize = (1*#Scale#)
 Text = %1 |
 FontWeight = 500
 X = (13*#Scale#)
 Y = ([Duration:Y])

[Duration]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MDuration
 FontSize = (1*#Scale#)
 FontWeight = 500
 X = (5*#Scale#)r
 Y = (32.5*#Scale#)

[PlayPause]
 Meter = Image
 ImageName = [StateButton]
 X = (18*#Scale#)
 Y = (38*#Scale#)
 W = (3*#Scale#)
 DynamicVariables = 1
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next4.png
 X = (24*#Scale#)
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]

[Prev]
 Meter = Image
 ImageName = #@#Images/Prev4.png
 X = (12*#Scale#)
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]

[RepeatSong]
 Meter = Image
 X = (6*#Scale#)
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction =  [!CommandMeasure "RepeatButton" "Repeat"]

[ShuffleSong]
 Meter = Image
 X = (30*#Scale#)
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction =  [!CommandMeasure "ShuffleButton" "Shuffle"]