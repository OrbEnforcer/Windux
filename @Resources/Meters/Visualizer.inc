[MainWindow]
 Meter = Shape 
 Shape = Rectangle 0, 0, (#Width# * #Scale#), (#Height# * #Scale#), 8 | Extend WindowStyle 
 WindowStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#
 X = 5
 Y = 5 

[Bands]
 Meter = Shape
 Shape =   Rectangle (((#VisX# * 0)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band0]), 1 | Extend Style
 Shape2 =  Rectangle (((#VisX# * 2)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band1]), 1 | Extend Style
 Shape3 =  Rectangle (((#VisX# * 4)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band2]), 1 | Extend Style
 Shape4 =  Rectangle (((#VisX# * 6)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band3]), 1 | Extend Style
 Shape5  = Rectangle (((#VisX# * 8)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band4]), 1 | Extend Style
 Shape6  = Rectangle (((#VisX# * 10)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band5]), 1 | Extend Style
 Shape7  = Rectangle (((#VisX# * 12)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band6]), 1 | Extend Style
 Shape8  = Rectangle (((#VisX# * 14)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band7]), 1 | Extend Style
 Shape9  = Rectangle (((#VisX# * 16)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band8]), 1 | Extend Style
 Shape10 = Rectangle (((#VisX# * 18)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band9]), 1 | Extend Style
 Shape11 = Rectangle (((#VisX# * 20)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band10]), 1 | Extend Style
 Shape12 = Rectangle (((#VisX# * 22)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band2]), 1 | Extend Style
 Shape13 = Rectangle (((#VisX# * 24)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band1]), 1 | Extend Style
 Shape14 = Rectangle (((#VisX# * 26)) * #Scale#), 0, (#VisW# * #Scale#), (#VisH# * [Band0]), 1 | Extend Style
 Style = Fill Color #HC# | StrokeWidth 0
 X = (2.3 * #Scale#)r
 Y = (30 * #Scale#)
 AntiAlias = 1
 DynamicVariables = 1