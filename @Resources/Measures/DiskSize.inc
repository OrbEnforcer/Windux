[BarStyle]
 BarOrientation = Horizontal
 BarColor = #C1#
 SolidColor = #HC#
 W = (30*#Scale#)
 H = (1*#Scale#)
 BevelType = 2
 BevelColor = #HC#
 BevelColor2 = #HC#

[mmDisk1]
 Measure = FreeDiskSpace
 Drive = C:
 Total = 1

[mDisk1]
 measure = Calc
 dynamicVariables = 1
 formula = ([mmDisk1]/1000000000)
 
[mDisk1Used]
 Measure = FreeDiskSpace
 Drive = C:
 InvertMeasure = 1

[UsedDriveSize1]
 measure = Calc
 dynamicVariables = 1
 formula = ([mDisk1]-[Disk1UsedGB])
 

[mDisk2Used]
 Measure = FreeDiskSpace
 Drive = D:
 InvertMeasure = 1

[mmDisk2]
 Measure = FreeDiskSpace
 Drive = D:
 Total = 1

[mDisk2]
 measure = Calc
 dynamicVariables = 1
 formula = ([mmDisk2]/1000000000)

[mDisk3Used]
 Measure = FreeDiskSpace
 Drive = E:
 InvertMeasure = 1

[mmDisk3]
 Measure = FreeDiskSpace
 Drive = E:
 Total = 1

[mDisk3]
 measure = Calc
 dynamicVariables = 1
 formula = ([mmDisk3]/1000000000)