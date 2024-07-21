[LuaTween]
 Measure = Script
 ScriptFile = #@#LuaTween/Main.lua
 TweenGroup = Tweenable 
 Tween0 = Single | Variable | WindowWidth | #WindowWidth# | 85 | 500
 Tween1 = Single | Variable | WindowHeight1 | #WindowHeight1# | #WindowHeight2# | 500

[BG]
 Meter = Shape
 Shape = Rectangle 5, 5, (#WindowWidth# * #Scale#), (98 * #Scale#), 8 | Extend Colours
 Colours = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#,245
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
 Colours = StrokeWidth 1 | Stroke Color #Mantle#,1 | Fill Color #Crust#,1
 X = (2 * #Scale#)r
 Y = (0 * #Scale#)r
 Group = Tweenable
 DynamicVariables = 1
 Hidden = 1

[CommandEdit]
 Meter = Shape
 Shape = Rectangle 0, 0, ((#WindowWidth#-30) * #Scale#), (10 * #Scale#) | Extend Colours
 Colours = StrokeWidth 1 | Stroke Color #Mantle#,1 | Fill Color #Crust#,1
 X = ([Input Box:X])
 Y = ([Input Box:Y])
 LeftMouseUpAction = !execute [!RainmeterPluginBang "Input ExecuteBatch 1"]
 Hidden = 0
 Group = Tweenable

[Input]
 Measure = Plugin
 Plugin = inputtext
 Command1 = [!ShowMeter "Visible Command"][!Redraw][!SetVariable command "$UserInput$"][!WriteKeyValue Variables command "$UserInput$" "#@#Variables.inc"][!UpdateMeasure #CURRENTSECTION#]
 IfMatch = load clock 
 IfMatchAction = [!ShowMeter BG2][!ShowMeterGroup Window2][!Delay 200][!CommandMeasure LuaTween "Start(0)"]
 IfMatch2 = unload clock 
 IfMatchAction2 = [!HideMeter BG2][!HideMeterGroup Window2][!Delay 500][!CommandMeasure LuaTween "Reverse(0)"]
 IfMatch3 = load vis
 IfMatchAction3 = [!CommandMeasure LuaTween "Start(1)"][!Delay 200][!ShowMeter BG3][!ShowMeterGroup Window3]
 IfMatch4 = unload vis
 IfMatchAction4 = [!HideMeter BG3][!HideMeterGroup Window3][!Delay 500][!CommandMeasure LuaTween "Reverse(1)"][!CommandMeasure LuaTween "Reverse(0)"]
 DynamicVariables = 1
 DefaultValue = 
 FocusDismiss = 1
 W = ((#WindowWidth#-30) * #Scale#)
 H = (10 * #Scale#)
 X = ([Input Box:X])
 Y = ([Input Box:Y])
 FontFace = JetBrains Mono ExtraBold
 FontSize = (1.5 * #Scale#)
 FontColor = #Mantle#
 AntiAlias = 1
 SolidColor = #Crust#,100
 Padding = 0,0,0,0
 DynamicVariables = 1


[Visible Command]
 Meter = String
 Text = #command#
 X = (1 * #Scale#)r
 Y = (0.1 * #Scale#)r
 MeterStyle = FontStyle
 Hidden = 1

[BG2]
 Meter = Shape
 Shape = Rectangle 5, 5, ((#WindowWidth2#) * #Scale#), ((#WindowHeight1#) * #Scale#), 8 | Extend Colours
 Colours = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#,245
 Group = Tweenable
 DynamicVariables = 1 
 X = ([BG:W]+20)
 Y = ([BG:Y])
 Hidden = 1 

[Clock]
 Meter = String 
 MeasureName = Time.12Hr
 MeterStyle = FontStyle
 FontFace = FFF Forward
 FontSize = (10 * #Scale#)
 X = (23*#Scale#)r
 Y = ([BG2:H]/3)
 Group = Window2
 Hidden = 1 

[MeasureASec]
 Measure=Calc
 Formula=1-MeasureASec
 Substitute="0":"","1":":"
 UpdateDivider = 25

;[Blinks]
 Meter = String
 MeasureName = MeasureASec
 FontFace = FFF Forward
 MeterStyle = FontStyle
 FontSize = (10 * #Scale#)
 X = (16.5 * #Scale#)r
 Y = (0 * #Scale#)r
 Group = Window2
 Hidden = 1 

[BG3]
 Meter = Shape
 Shape = Rectangle 5, 5, ((#WindowWidth2#) * #Scale#), (#WindowHeight2# * #Scale#), 8 | Extend Colours
 Colours = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#,245
 Group = Tweenable
 DynamicVariables = 1 
 X = ([BG:W]+20)
 Y = ([BG2:Y]+500)
 Group = Window3
 Hidden = 1

[Bands]
 Meter = Shape
 Shape =   Rectangle (((3*0)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band0]), 1 | Extend Style
 Shape2 =  Rectangle (((3*2)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band1]), 1 | Extend Style
 Shape3 =  Rectangle (((3*4)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band2]), 1 | Extend Style
 Shape4 =  Rectangle (((3*6)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band3]), 1 | Extend Style
 Shape5  = Rectangle (((3*8)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band4]), 1 | Extend Style
 Shape6  = Rectangle (((3*10)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band5]), 1 | Extend Style
 Shape7  = Rectangle (((3*12)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band6]), 1 | Extend Style
 Shape8  = Rectangle (((3*14)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band7]), 1 | Extend Style
 Shape9  = Rectangle (((3*16)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band8]), 1 | Extend Style
 Shape10 = Rectangle (((3*18)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band9]), 1 | Extend Style
 Shape11 = Rectangle (((3*20)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band10]), 1 | Extend Style
 Shape12 = Rectangle (((3*22)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band2]), 1 | Extend Style
 Shape13 = Rectangle (((3*24)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band1]), 1 | Extend Style
 Shape14 = Rectangle (((3*26)) * #Scale#), ((10 * #Scale#)+34), (5 * #Scale#), (-300 * [Band0]), 1 | Extend Style
 Style = Fill Color #Mantle# | StrokeWidth 0
 X = (1.5 * #Scale#)r
 Y = ([BG3:Y]+330)
 AntiAlias = 1
 Hidden = 1
 DynamicVariables = 1
 Group = Window3