[Lock]
 Meter = Shape
 Shape = Rectangle 0, 0, #SCREENAREAWIDTH#, #SCREENAREAHEIGHT# | Fill LinearGradient Glass 
 Glass =  90 | 18,18,18,1; 1.0 | 18,18,18,1 ; 0.0

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0, 0, #PFPSize#, #PFPSize#, #PFPSize# | Fill Color #Main#
 X = (#SCREENAREAWIDTH#/2.2)
 Y = (#SCREENAREAHEIGHT#/4)

[UserPFP]
 Meter = Image
 ImageName = "C:\Users\Orb\Pictures\PFP\New PFP.jpg"
 Container = UserPFPContainer
 W = #PFPSize#

[User]
 Meter = String
 MeterStyle = FontStyle
 StringCase = None
 FontWeight = 900
 MeasureName = UserName
 Text = Welcome,%1
 X = (94.5 * #Scale#)
 Y = (44 * #Scale#)

[Message]
 Meter = String
 MeterStyle = FontStyle
 Text = Press Hotkey to unlock.
 FontSize = (1.2 * #Scale#)
 X = (0 * #Scale#)r
 Y = (4 * #Scale#)r 