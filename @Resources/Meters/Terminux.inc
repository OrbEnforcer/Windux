[LuaTween]
 Measure = Script
 ScriptFile = #@#LuaTween/Main.lua
 TweenGroup = Tweenable 
 Tween0 = Single | Variable | WindowWidth | 189 | 100 | 500

[BG]
 Meter = Shape
 Shape = Rectangle 5, 5, (#WindowWidth# * #Scale#), (98 * #Scale#), 8 | Extend Colours
 Colours = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#, 200
 Group = Tweenable
 DynamicVariables = 1 

[>txt]
 Meter = String
 MeterStyle = FontStyle
 X = (5 * #Scale#)r
 Y = (5 * #Scale#)r
 Text = >

[Input Box]
Meter = Shape
Shape = Rectangle 0, 0, ((#WindowWidth#-30) * #Scale#), (10 * #Scale#) | Extend Colours
Colours = StrokeWidth 1 | Stroke Color #HC#,1 | Fill Color #C1#,1
X = (2 * #Scale#)r
Y = (0 * #Scale#)r
 Group = Tweenable
DynamicVariables = 1
Hidden = 1

[CommandEdit]
Meter = Shape
Shape = Rectangle 0, 0, ((#WindowWidth#-30) * #Scale#), (10 * #Scale#) | Extend Colours
Colours = StrokeWidth 1 | Stroke Color #HC#,1 | Fill Color #C1#,1
X = ([Input Box:X])
Y = ([Input Box:Y])
leftMouseUpAction = !execute [!RainmeterPluginBang "Input ExecuteBatch 1"]
Hidden = 0
Group = Tweenable

[Input]
Measure = Plugin
Plugin = inputtext
Command1 = [!SetVariable command "$UserInput$"][!WriteKeyValue Variables command "$UserInput$" "#@#Variables.inc"][!UpdateMeasure #CURRENTSECTION#]
IfMatch = load clock 
IfMatchAction = [!CommandMeasure LuaTween "Start(0)"]
DynamicVariables = 1
DefaultValue = 
FocusDismiss = 1
W = ((#WindowWidth#-30) * #Scale#)
H = (10 * #Scale#)
X = ([Input Box:X])
Y = ([Input Box:Y])
FontFace = JetBrains Mono ExtraBold
FontSize = (1.5 * #Scale#)
FontColor = #HC#
AntiAlias = 1
SolidColor = #C1#,100
Padding = 0,0,0,0
DynamicVariables = 1

[Visible Command]
Meter = String
Text = #command#
X = (1 * #Scale#)r
Y = (0.1 * #Scale#)r
MeterStyle = FontStyle

[BG2]
 Meter = Shape
 Shape = Rectangle 5, 5, ((#WindowWidth2#) * #Scale#), (98 * #Scale#), 8 | Extend Colours
 Colours = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#, 200
 Group = Tweenable
 DynamicVariables = 1 
 X = ([BG:W]+20)
 Y = ([BG:Y])
 
[Clock]
 Meter = String 
 MeasureName = Time.12Hr
 MeterStyle = FontStyle
 FontFace = FFF Forward
 FontSize = (10 * #Scale#)
 X = (23*#Scale#)r
 Y = (40*#Scale#)r

[MeasureASec]
 Measure=Calc
 Formula=1-MeasureASec
 Substitute="0":"","1":":"
 UpdateDivider = 25

[Blinks]
 Meter = String
 MeasureName = MeasureASec
 FontFace = FFF Forward
 MeterStyle = FontStyle
 FontSize = (10 * #Scale#)
 X = (16.5*#Scale#)r
 Y = (39*#Scale#)
