[bg]
 Meter = Shape
 Shape = Rectangle 0, 0, 200,45,5 | StrokeWidth 0 | Fill Color #C1#

[Change]
 Meter = String 
 MeterStyle = FS2
 Text = Change Apps
 X = 16r
 MouseOverAction = [!SetOption Change FontColor "255,0,0"][!Update]
 MouseLeaveAction = [!SetOption Change FontColor "255,255,255"][!Update]
 LeftMouseUpAction = [!ActivateConfig "Win-winned\Settings" "App Select.ini"][!DeactivateConfig]
