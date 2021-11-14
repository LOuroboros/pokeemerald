	.align 2
gTilesetPalOverrides_General_Shinnoh::
	.byte 1             @ palette index
	.byte HOUR_NIGHT    @ start hour (inclusive)
	.byte HOUR_MORNING  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_General_Shinnoh_01

	.byte 0xFF
	.byte 0
	.byte 0
	.byte 0 @ padding
	.4byte NULL
