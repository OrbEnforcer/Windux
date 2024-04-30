[Battery.Measure]
 Measure=Plugin
 Plugin=PowerPlugin
 PowerState=Percent

[CPU.Usage]
 Measure= Cpu
 Processor= 1
 UpdateDivider= 100

[Temp.Measure]
 Measure=Plugin
 Plugin=CoreTemp
 CoreTempType=MaxTemperature

[Date.Measure]
 Measure = Time
 Format = %a, %d %B

[Status]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Status
 IfCondition = Status = 1
 IfTrueAction = [!ShowMeterGroup "On"]
 IfFalseAction = [!HideMeterGroup "On"]

[Title]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Title

[StateButton]
 Measure=Plugin
 Plugin=WebNowPlaying
 PlayerType=State
 Substitute="0":"","1":"#@#Images/Pause.png","2":"#@#Images/Play.png"

[Volume.Measure]
 Measure = Plugin
 Plugin = Win7AudioPlugin

[Vol.Measure]
 Measure = Calc
 Formula = Volume.Measure
 MinValue = 0
 MaxValue = 100
 RegExpSubstitute=1
 Substitute = "-1":"00"
 IfCondition = Volume.Measure = -1
 IfTrueAction = [!SetOption Volume.IMG ImageName "#@#Images/Mute.png"]
 IfFalseAction = [!SetOption Volume.IMG ImageName "#@#Images/Volume2.png"]

[Language]
 Measure = Plugin
 Plugin = PowerShellRM
 Line = Add-Type -AssemblyName System.Windows.Forms; [System.Windows.Forms.InputLanguage]::CurrentInputLanguage.Culture.DisplayName

;--------------------------------------------------------------
;--------------------------------------------------------------
;--------------------------------------------------------------

[MeasureAudio]
Measure = Plugin
Plugin = AudioLevel
Port = Output
FFTSize = 1024
FFTAttack = 75
FFTDecay = 150
Bands = 12

[Band0]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 0

[Band1]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 1

[Band2]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 2

[Band3]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 3

[Band4]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 4

[Band5]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 5

[Band6]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 6

[Band7]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 7

[Band8]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 8

[Band9]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 9

[Band10]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 10

[Band10]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 11