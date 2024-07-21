[MainWindow]
 Meter = Shape 
 Shape = Rectangle 0, 0, (#Width# * #Scale#), (#Height# * #Scale#), 8 | Extend WindowStyle 
 WindowStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
 X = 5
 Y = 5 

[Fetch.txt]
 Meter = String 
 MeterStyle = FontStyle
 Text = > rainfetch
 X = (3 * #Scale#)
 Y = (3 * #Scale#)

[RainFetch.img]
 Meter = Image
 ImageName = #@#Images/fetch2
 W = (10 * #Scale#)
 X = (8 * #Scale#)
 Y = (11 * #Scale#)

[Box]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (16 * #Scale#) , 8 | Extend BoxStyle
 BoxStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color 0,0,0,1
 X = (21 * #Scale#)
 Y = (9 * #Scale#)

[User.img]
 Meter = Image
 ImageName = #@#Images/User
 ImageTint = #Red#
 W = (2 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r

[Host.img]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Host
 ImageTint = #Yellow#

[Uptime.img]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Uptime2
 ImageTint = #Green#

[OS.img]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Laptop
 ImageTint = #Pink#

[Memory.img]
 Meter = Image
 MeterStyle = IconStyle
 ImageName = #@#Images/Memory
 ImageTint = #Peach#

[User.txt]
 Meter = String
 MeterStyle = FontStyle 
 FontColor = #Red#
 Text = username
 X = (2.5 * #Scale#)r
 Y = ([User.img:Y])

[Hname.txt]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 FontColor = #Yellow#
 Text = hname

[Uptime.txt]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 FontColor = #Green#
 Text = uptime

[OS.txt]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 FontColor = #Pink#
 Text = osversion

[Memory.txt]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 FontColor = #Peach#
 Text = memory

[mUser]
 Meter = String
 MeterStyle = FontStyle 
 MeasureName = UserName
 X = (10 * #Scale#)r
 Y = ([User.img:Y])

[mHname]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 MeasureName = Host
 Y = (3.2 * #Scale#)r
 
[mUptime]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 MeasureName = Uptime
 Y = (3.2 * #Scale#)r

[OS]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 MeasureName = OSName

[mUsedMemory]
 Meter = String
 MeterStyle = FontStyle | TextDistance1
 MeasureName = UsedMemory
 Text = %1 GB of

[mMemory]
 Meter = String
 MeterStyle = FontStyle
 X = (7 * #Scale#)r
 Y = (0 * #Scale#)r
 MeasureName = Memory
 Text =  %1 GB