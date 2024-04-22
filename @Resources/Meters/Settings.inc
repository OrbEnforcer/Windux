[Boundary]
 Meter = Shape
 Shape = Rectangle 0, 0, 550, 280, 4 | Fill Color #HC#

[Holder]
 Meter = Shape
 Shape = Rectangle 5, 5, 540, 270, 3 | Fill Color #SC#
 MouseOverAction = [!ShowMeter Mini]
 MouseLeaveAction = [!HideMeter Mini]

[Mini]
 Meter = Image
 ImageName = #@#Images/Mini.png
 ImageTint = 255,0,0
 Hidden = 1
 W = 20
 X = 520
 Y = 10
 LeftMouseUpAction = [!DeactivateConfig "Windux\Settings" "Settings.ini"]