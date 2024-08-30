[MainWindow]
 Meter = Shape
 Shape = Rectangle 5, 5, (80 * #Scale#), (55 * #Scale#), 8 | Fill Color #Settings# | StrokeWidth 2 | Stroke Color #Mantle#
 MouseOverAction = [!ShowMeter Minimize]
 MouseLeaveAction = [!HideMeter Minimize]

[Minimize]
 Meter = Image
 ImageName = #@#Images/Mini.png
 ImageTint = #Red#
 Hidden = 1
 W = (2 * #Scale#)
 X = (78 * #Scale#)
 Y = (1 * #Scale#)
 LeftMouseUpAction = [!DeactivateConfig "Windux\Settings" "Settings.ini"]

[Settings.txt]
 Meter = String
 MeterStyle = FS1
 Text = Settings
 X = (2.5 * #Scale#)
 Y = (3 * #Scale#)

[ColourPicker.txt]
 Meter = String
 MeterStyle = FS2
 Text = Colours
 X = (2.5 * #Scale#)
 Y = (10 * #Scale#)

[Main.txt]
 Meter = String
 MeterStyle = FS3
 Text = Main
 X = (2.5 * #Scale#)
 Y = (4 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Main" "FileName=#@#Variables.inc"][!Refresh *]

[Crust.txt]
 Meter = String
 MeterStyle = FS3
 Text = Crust
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Crust" "FileName=#@#Variables.inc"][!Refresh *]

[Mantle.txt]
 Meter = String
 MeterStyle = FS3
 Text = Mantle
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Mantle" "FileName=#@#Variables.inc"][!Refresh *]

[Base.txt]
 Meter = String
 MeterStyle = FS3
 Text = Base
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Base" "FileName=#@#Variables.inc"][!Refresh *]

[MainPreview]
 Meter = Shape
 Shape = Rectangle 0, 0, (2 * #Scale#), (2 * #Scale#), (2 * #Scale#) | StrokeWidth 0 | Fill Color #Main#
 X = (14 * #Scale#) 
 Y = (14 * #Scale#)
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Main" "FileName=#@#Variables.inc"][!Refresh *]

[CrustPreview]
 Meter = Shape
 Shape = Rectangle 0, 0, (2 * #Scale#), (2 * #Scale#), (2 * #Scale#) | StrokeWidth 0 | Fill Color #Crust#
 X = (0 * #Scale#)r 
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Crust" "FileName=#@#Variables.inc"][!Refresh *]

[MantlePreview]
 Meter = Shape
 Shape = Rectangle 0, 0, (2 * #Scale#), (2 * #Scale#), (2 * #Scale#) | StrokeWidth 0 | Fill Color #Mantle#
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Mantle" "FileName=#@#Variables.inc"][!Refresh *]

[BasePreview]
 Meter = Shape
 Shape = Rectangle 0, 0, (2 * #Scale#), (2 * #Scale#), (2 * #Scale#) | StrokeWidth 0 | Fill Color #Base#
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 LeftMouseUpAction = ["#@#Color Picker\RainRGB4.exe" "VarName=Base" "FileName=#@#Variables.inc"][!Refresh *]

[MainHEX]
 Meter = String
 MeterStyle = FS3
 Text = #Main#
 X = (18 * #Scale#)
 Y = (14 * #Scale#)

[CrustHEX]
 Meter = String
 MeterStyle = FS3
 Text = #Crust#
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r
 
[MantleHEX]
 Meter = String
 MeterStyle = FS3
 Text = #Mantle#
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r

[BaseHEX]
 Meter = String
 MeterStyle = FS3
 Text = #Base#
 X = (0 * #Scale#)r
 Y = (2.5 * #Scale#)r

;----;
;Time;
;----;

[TimeFormat.txt]
 Meter = String
 MeterStyle = FS2
 Text = Time Format
 X = (2.5 * #Scale#)
 Y = (25 * #Scale#)

[Select12]
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Select.png
 X = (2.5 * #Scale#)
 Y = (5 * #Scale#)r
 LeftMouseUpAction = [!WriteKeyValue Variables "TF" "Time.12Hr" "#@#Variables.inc"][!WriteKeyValue Variables "S12H" "0" "#@#Variables.inc"][!WriteKeyValue Variables "S24H" "1" "#@#Variables.inc"][!Refresh "Windux\Windowed Skins\Clock" "Windowed Clock.ini"][!Refresh "Windux\Bar" "Windux Bar.ini"][!Refresh][!Update]

[Select24]
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Select.png
 LeftMouseUpAction = [!WriteKeyValue Variables "TF" "Time.24Hr" "#@#Variables.inc"][!WriteKeyValue Variables "S24H" "0" "#@#Variables.inc"][!WriteKeyValue Variables "S12H" "1" "#@#Variables.inc"][!Refresh "Windux\Windowed Skins\Clock" "Windowed Clock.ini"][!Refresh "Windux\Bar" "Windux Bar.ini"][!Refresh][!Update]

[Selected12] 
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Selected.png
 W = (1.75 * #Scale#)
 X = (2.9 * #Scale#)
 Y = (30.4 * #Scale#)
 Hidden = #S12H#

[Selected24] 
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Selected.png
 W = (1.75 * #Scale#)
 X = (15 * #Scale#)r
 Y = (0 * #Scale#)r
 Hidden = #S24H#

[12HR]
 Meter = String 
 MeterStyle = FS3
 Text = 12 Hour
 X = (6 * #Scale#)
 Y = (30.2 * #Scale#)

[24HR]
 Meter = String 
 MeterStyle = FS3
 Text = 24 Hour
 X = (15 * #Scale#)r
 Y = (0 * #Scale#)r

;---;
;Bar;
;---;

[Bars.txt]
 Meter = String
 MeterStyle = FS2
 Text = Bars
 X = (2.5 * #Scale#)
 Y = (35 * #Scale#)

[WinduxPreview]
 Meter = Image
 ImageName = #@#Preview/Windux
 W = (70 * #Scale#)
 PreserveAspectRatio = 1
 X = (6 * #Scale#)
 Y = (5 * #Scale#)r 

[SegmenduxPreview]
 Meter = Image
 ImageName = #@#Preview/Segmendux2
 W = (70 * #Scale#)
 H = (2.5 * #Scale#)
 PreserveAspectRatio = 2
 X = (0 * #Scale#)r
 Y = (5 * #Scale#)r 

[SelectWindux]
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Select.png
 X = (2.5 * #Scale#)
 Y = (40 * #Scale#)
 LeftMouseUpAction = [!ActivateConfig "Windux\Bar" "Windux Bar.ini"][!WriteKeyValue Variables "SW" "0" "#@#Variables.inc"][!WriteKeyValue Variables "SS" "1" "#@#Variables.inc"][!Refresh]

[SelectSegmendux]
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Select.png
 X = (0 * #Scale#)r
 Y = (5 * #Scale#)r
 LeftMouseUpAction = [!ActivateConfig "Windux\Bar" "Segmendux Bar.ini"][!WriteKeyValue Variables "SW" "1" "#@#Variables.inc"][!WriteKeyValue Variables "SS" "0" "#@#Variables.inc"][!Refresh]

[SelectedWindux] 
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Selected.png
 W = (1.75 * #Scale#)
 X = (2.9 * #Scale#)
 Y = (40.4 * #Scale#)
 Hidden = #SW#

[SelectedSegmendux] 
 Meter = Image
 MeterStyle = ButtonStyle
 ImageName = #@#Images/Selected.png
 W = (1.75 * #Scale#)
 X = (0 * #Scale#)r
 Y = (5 * #Scale#)r
 Hidden = #SS#

;-------;
;Browser;
;-------;

[Default.txt]
 Meter = String
 MeterStyle = FS2
 Text = Set Browser Icon
 X = (43 * #Scale#)
 Y = (10 * #Scale#)

[BrowserBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (7 * #Scale#), 8 | StrokeWidth 0 | Fill Color #Crust#
 X = (33 * #Scale#)
 Y = (14.5 * #Scale#) 

[Brave.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Brave
 X = (36 * #Scale#)
 Y = (16 * #Scale#)
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Brave" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[Chrome.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Chrome
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Chrome" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[Edging.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Edging
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Edging" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[Firefox.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Firefox
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Firefox" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[Opera.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Opera
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Opera" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[OperaGX.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/OperaGX
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "OperaGX" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]

[Vivaldi.IMG]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Browsers/Vivaldi
 LeftMouseUpAction = [!WriteKeyValue Variables "Browser" "Vivaldi" "#@#Variables.inc"][!Refresh "Windux\Bar" "Windux Bar.ini"]