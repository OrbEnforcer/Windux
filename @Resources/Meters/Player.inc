[MainWindow]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Width# * #Scale#), (#Height# * #Scale#), 8 | Extend WindowStyle
 WindowStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
 X = 5
 Y = 5

[Box1]
 Meter = Shape
 Shape = Rectangle 0, 0, ((#CoverSize# + 2) * #Scale#), ((#CoverSize# + 2) * #Scale#), 1 | Extend BoxStyle
 Shape2 = Rectangle (0.5 * #Scale#), (0.5 * #Scale#), ((#CoverSize# + 1) * #Scale#), ((#CoverSize# + 1) * #Scale#), 1 | Extend BoxStyle
 BoxStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (2 * #Scale#)r
 Y = (2 * #Scale#)r

[CoverContainer]
 Meter = Shape 
 Shape = Rectangle 0, 0, (#CoverSize# * #Scale#), (#CoverSize# * #Scale#), 8 | Fill Color #Main#
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r

[Cover.IMG]
 Meter = Image
 MeasureName = Cover
 W = (#CoverSize# * #Scale#)
 H = (#CoverSize# * #Scale#)
 Container = CoverContainer
 PreserveAspectRatio = 1
 Group = On
 AntiAlias = 1

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 InLineSetting = Underline
 InlineSetting2 = Shadow | 0 | 0 | 0 | #Main#
 FontWeight = 900
 X = (15 * #Scale#)r
 Y = (1 * #Scale#)r
 W = (40 * #Scale#)
 ClipString = 1
 Group = On

[Artist.txt]
 Meter = String
 MeasureName = Artist
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontWeight = 550
 X = (0 * #Scale#)r
 Y = (4 * #Scale#)r
 W = ([Title.txt:W])
 ClipString = 1
 Group = On

[Progress]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MProgress
 MeasureName2 = MDuration
 FontSize = (1.5 * #Scale#)
 Text = %1 | %2
 FontWeight = 500
 X = (23 * #Scale#)
 Y = (16 * #Scale#)

[Box2]
 Meter = Shape
 Shape = Rectangle 0, 0, ((#Width# - 2) * #Scale#), (9 * #Scale#), 1 | Extend BoxStyle
 BoxStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (1.75 * #Scale#)
 Y = (20 * #Scale#)

[Playing.txt]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.1 * #Scale#)
 Text = Playing
 StringAlign = Center
 SolidColor = #Crust#
 W = (10 * #Scale#)
 X = (8 * #Scale#)
 Y = (19 * #Scale#)

[ProgressBar]
 Meter = Bar
 MeasureName = MProgressBar
 BarOrientation = Horizontal
 W = ((#Width# - 7) * #Scale#)
 H = (1.5 * #Scale#)
 X = (3.9 * #Scale#)
 Y = (22 * #Scale#)
 BarColor = #Main#
 SolidColor = #Base#

[RepeatSong]
 Meter = Image
 MeterStyle = ButtonStyle
 X = (12.5 * #Scale#)
 Y = (3.5 * #Scale#)r
 LeftMouseUpAction =  [!CommandMeasure "RepeatButton" "Repeat"]

[Prev]
 Meter = Image
 ImageName = #@#Images/Prev4.png
 MeterStyle = ButtonStyle
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]

[PlayPause]
 Meter = Image
 ImageName = [StateButton]
 MeterStyle = ButtonStyle
 DynamicVariables = 1
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next4.png
 MeterStyle = ButtonStyle
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]

[ShuffleSong]
 Meter = Image
 MeterStyle = ButtonStyle
 LeftMouseUpAction =  [!CommandMeasure "ShuffleButton" "Shuffle"]