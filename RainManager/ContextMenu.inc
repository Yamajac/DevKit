[Variables]
Width=250
Length=6
MouseOverColour = 200,200,0,50
SeparatorColour = 155,147,201,255
BackgroundColour = 46,52,68,255
BorderColour = 20,13,30,150
FontColour = 200,200,200,200
ShadowColour = 0,0,0,100
Config =DevKit\Clock

Text1=#Config#
Style1=Bold
Separator1=1

Icon2=
Text2=Manage
Bang2=[!Manage Skins "#Config#"][!DeactivateConfig]

Icon3=
Text3=Edit
Bang3=[!EditSkin "#Config#"][!DeactivateConfig]

Icon4=
Text4=Refresh
Bang4=[!Manage Skins "#Config#"][!DeactivateConfig]

Icon5=
Text5=Unload
Bang5=[!DeactivateConfig "#Config#"][!UpdateMeasure RainmeterSettings DevKit\RainManager][!DeactivateConfig]
Separator5 = 1

Icon6=
Text6=Refresh
Bang6=[!Refresh "DevKit\RainManager"][!DeactivateConfig]
