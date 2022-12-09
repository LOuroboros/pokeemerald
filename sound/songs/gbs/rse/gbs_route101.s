	.include "asm/macros.inc"

	.section .rodata
	.global gbs_route101
	.align 1

@ Pokémon R/S/E - Route 101
@ Demixed by Mmmmmm, ported to GBS by Lunos
@ https://pastebin.com/VstjfaGf
@ https://hax.iimarckus.org/topic/6777/

gbs_route101_Ch1:
	gbs_switch 0
@ Start
	tempo 166
	volume 7, 7
	pitch_offset 1
	vibrato 16, 1, 5
	stereo_panning FALSE, FALSE
	note_type 12, 8, 3
	rest 2
gbs_route101_Ch1_loop:
	volume_envelope 8, 4
	sound_call gbs_route101_Ch1_branch_1
	volume_envelope 8, 2
	duty_cycle 0
	sound_call gbs_route101_Ch1_branch_2
	sound_call gbs_route101_Ch1_branch_3
	sound_call gbs_route101_Ch1_branch_3
	octave 5
	note E_, 1
	octave 4
	note B_, 1
	note E_, 1
	octave 3
	note B_, 1
	octave 4
	note G_, 1
	octave 3
	note B_, 1
	note G_, 1
	note E_, 1
	note A_, 1
	octave 4
	note D_, 1
	note E_, 1
	note A_, 1
	note E_, 1
	octave 5
	note D_, 1
	note E_, 1
	note A_, 1
	note E_, 1
	note Ds, 1
	rest 1
	note D_, 1
	note Cs, 2
	octave 4
	note A_, 2
	sound_call gbs_route101_Ch1_branch_2
	volume_envelope 8, 3
	duty_cycle 3
	octave 3
	note As, 1
	note D_, 1
	note F_, 1
	note As, 1
	octave 4
	note D_, 4
	octave 5
	volume_envelope 8, 4
	duty_cycle 2
	note F_, 2
	volume_envelope 6, 4
	note F_, 2
	volume_envelope 8, 4
	note As, 2
	volume_envelope 6, 4
	note As, 2
	volume_envelope 8, 3
	duty_cycle 3
	octave 3
	note A_, 1
	note Cs, 1
	note E_, 1
	note G_, 1
	note A_, 4
	octave 5
	duty_cycle 2
	volume_envelope 8, 4
	note E_, 2
	volume_envelope 6, 4
	note E_, 2
	volume_envelope 8, 4
	note A_, 2
	volume_envelope 6, 4
	note A_, 2
	sound_loop 0, gbs_route101_Ch1_loop

gbs_route101_Ch1_branch_1:
	octave 3
	note D_, 2
	octave 2
	note A_, 2
	rest 2
	note Fs, 1
	note D_, 1
	note Fs, 2
	rest 2
	octave 3
	note D_, 4
	note E_, 2
	octave 2
	note B_, 2
	rest 2
	note G_, 1
	note E_, 1
	note G_, 2
	rest 2
	octave 3
	note E_, 4
	note Cs, 1
	octave 2
	note B_, 1
	octave 3
	note Cs, 1
	note D_, 1
	note E_, 1
	note Fs, 1
	note G_, 1
	note E_, 1
	note A_, 8
	octave 4
	note Cs, 1
	octave 3
	note B_, 1
	octave 4
	note Cs, 1
	octave 3
	note B_, 1
	octave 4
	note Cs, 1
	octave 3
	rest 2
	note A_, 1
	octave 4
	note Cs, 2
	rest 2
	octave 3
	note E_, 2
	octave 2
	note A_, 2

gbs_route101_Ch1_branch_2:
	octave 4
	note G_, 1
	octave 3
	note G_, 1
	octave 4
	note D_, 1
	octave 3
	note B_, 1
	octave 4
	note G_, 1
	octave 3
	note G_, 1
	octave 4
	note D_, 1
	octave 3
	note B_, 1
	note G_, 1
	note B_, 1
	octave 4
	note D_, 1
	note G_, 1
	octave 3
	note B_, 1
	octave 4
	note G_, 1
	octave 5
	note D_, 1
	note G_, 1
	octave 4
	note Fs, 1
	octave 3
	note Fs, 1
	octave 4
	note D_, 1
	octave 3
	note A_, 1
	octave 4
	note Fs, 1
	octave 3
	note Fs, 1
	octave 4
	note D_, 1
	octave 3
	note A_, 1
	note Fs, 1
	octave 4
	note D_, 1
	note Fs, 1
	note A_, 1
	note D_, 1
	note A_, 1
	octave 5
	note D_, 1
	note Fs, 1

gbs_route101_Ch1_branch_3:
	octave 4
	note G_, 1
	octave 3
	note G_, 1
	note B_, 1
	octave 4
	note E_, 1

gbs_route101_Ch2:
	gbs_switch 1
	duty_cycle 2
	vibrato 18, 3, 6
	note_type 12, 7, 7
	rest 2
gbs_route101_Ch2_loop:
	volume_envelope 7, 7
	sound_call gbs_route101_Ch2_branch_1
	sound_call gbs_route101_Ch2_branch_1
	sound_call gbs_route101_Ch2_branch_2
	volume_envelope 9, 7
	octave 4
	note D_, 1
	rest 1
	note D_, 1
	rest 1
	note D_, 1
	rest 1
	note E_, 1
	note Fs, 1
	volume_envelope 9, 0
	note G_, 2
	volume_envelope 9, 7
	note G_, 6
	note E_, 4
	note D_, 4
	note E_, 1
	rest 1
	note E_, 1
	rest 1
	note E_, 1
	rest 1
	note E_, 1
	note Fs, 1
	note E_, 6
	volume_envelope 7, 7
	octave 1
	note A_, 2
	sound_call gbs_route101_Ch2_branch_2
	note Fs, 1
	rest 1
	note A_, 1
	rest 1
	octave 2
	note D_, 2
	octave 1
	note Fs, 2
	volume_envelope 9, 7
	octave 4
	note As, 6
	note A_, 2
	note G_, 4
	note F_, 2
	note As, 2
	volume_envelope 9, 0
	note A_, 8
	volume_envelope 9, 7
	note A_, 8
	sound_loop 0, gbs_route101_Ch2_loop

gbs_route101_Ch2_branch_1:
	octave 1
	note D_, 2
	rest 5
	note A_, 1
	note D_, 2
	rest 4
	note A_, 2
	note E_, 2
	rest 1
	note E_, 1
	octave 2
	note Ds, 2
	octave 1
	note B_, 1
	note B_, 1
	note E_, 2
	rest 4
	note E_, 2
	note A_, 2
	rest 5
	note E_, 1
	note A_, 2
	rest 4
	octave 2
	note E_, 1
	note E_, 1
	octave 1
	note A_, 2
	rest 2
	note A_, 1
	rest 2
	note E_, 1
	note A_, 2
	rest 2
	octave 2
	note E_, 1
	rest 1
	octave 1
	note A_, 2

gbs_route101_Ch2_branch_2:
	note G_, 2
	rest 2
	note G_, 1
	rest 1
	octave 2
	note D_, 2
	octave 1
	note G_, 2
	rest 4
	volume_envelope 9, 2
	note G_, 1
	note G_, 1
	volume_envelope 9, 7
	note Fs, 2
	rest 1
	note A_, 1
	octave 2
	note Cs, 2
	octave 1
	note D_, 1
	note E_, 1

gbs_route101_Ch3:
	gbs_switch 2
	stereo_panning FALSE, TRUE
	note_type 12, 1, 3
	vibrato 21, 2, 4
gbs_route101_Ch3_loop:
	sound_call gbs_route101_Ch3_branch_1
	sound_call gbs_route101_Ch3_branch_1
	octave 6
	note Cs, 1
	note D_, 1
	octave 5
	note B_, 1
	rest 1
	note B_, 1
	rest 1
	note B_, 1
	rest 1
	note B_, 1
	octave 6
	note Cs, 1
	note D_, 4
	octave 5
	note D_, 4
	sound_call gbs_route101_Ch3_branch_2
	note G_, 1
	rest 1
	octave 4
	note B_, 1
	rest 1
	octave 5
	note Cs, 1
	rest 1
	note E_, 1
	note Fs, 1
	note G_, 4
	note B_, 4
	sound_call gbs_route101_Ch3_branch_2
	note B_, 1
	rest 1
	note B_, 1
	rest 1
	note B_, 1
	rest 1
	note B_, 1
	octave 6
	note Cs, 1
	note D_, 4
	octave 5
	note G_, 4
	octave 6
	note Fs, 1
	rest 1
	note G_, 1
	rest 1
	note Fs, 1
	rest 1
	note Fs, 1
	note E_, 1
	note D_, 6
	rest 3
	note D_, 6
	note C_, 2
	octave 5
	note As, 4
	note F_, 2
	octave 6
	note D_, 2
	note Cs, 8
	volume_envelope 2, 3
	note Cs, 6
	volume_envelope 1, 3
	sound_loop 0, gbs_route101_Ch3_loop

gbs_route101_Ch3_branch_1:
	octave 5
	note A_, 1
	note B_, 1
	note A_, 1
	rest 1
	note A_, 1
	rest 1
	note G_, 1
	rest 1
	note Fs, 2
	rest 2
	note Fs, 1
	rest 1
	note G_, 1
	rest 1
	note A_, 1
	rest 1
	note G_, 2
	rest 2
	note Fs, 2
	rest 2
	note E_, 2
	rest 2
	note B_, 2
	rest 2
	note A_, 12
	rest 2
	note Fs, 1
	note G_, 1
	note A_, 1
	note G_, 1
	note A_, 1
	note G_, 1
	note A_, 1
	rest 1
	note G_, 1
	note Fs, 1
	note E_, 1
	rest 5

gbs_route101_Ch3_branch_2:
	note A_, 1
	rest 1
	note A_, 1
	rest 1
	note A_, 1
	rest 1
	note A_, 1
	note B_, 1
	note A_, 6
	rest 2

gbs_route101_Ch4:
	gbs_switch 3
	stereo_panning FALSE, FALSE
	toggle_noise 0
	drum_speed 12
	rest 2
gbs_route101_Ch4_loop:
	sound_call gbs_route101_Ch4_branch_1
	note Ds, 1
	note Ds, 1
	sound_loop 4, gbs_route101_Ch4_loop
gbs_route101_Ch4_loop_2:
	sound_call gbs_route101_Ch4_branch_2
	note D_, 1
	note B_, 1
	note B_, 1
	note B_, 1
	note Ds, 1
	note B_, 1
	note D_, 1
	note D_, 1
	sound_call gbs_route101_Ch4_branch_2
	note D_, 1
	note B_, 1
	note B_, 1
	note D_, 1
	note Ds, 1
	note B_, 1
	note D_, 1
	note B_, 1
	sound_loop 3, gbs_route101_Ch4_loop_2
	note D_, 1
	note B_, 1
	note B_, 1
	note D_, 1
	note Ds, 2
	note F_, 1
	note F_, 1
	note F_, 2
	note Ds, 1
	note Ds, 1
	note D_, 2
	note Fs, 2
	note D_, 1
	note B_, 1
	note B_, 1
	note D_, 1
	note Ds, 2
	note F_, 1
	note F_, 1
	note F_, 2
	note Ds, 1
	note Ds, 1
	note D_, 4
	sound_loop 0, gbs_route101_Ch4_loop

gbs_route101_Ch4_branch_1:
	note Ds, 4
	note F_, 3
	note Ds, 1
	note Ds, 4
	note F_, 2
	note Ds, 1
	note Ds, 1
	note Ds, 4
	note F_, 4
	note Ds, 2
	note F_, 1
	note F_, 1
	note F_, 2

gbs_route101_Ch4_branch_2:
	note D_, 1
	note B_, 1
	note B_, 1
	note B_, 1
	note Ds, 1
	note B_, 1
	note D_, 1
	note B_, 1

	.align 4
gbs_route101:
	.byte 4	@ NumTrks
	.byte 0	@ NumBlks
	.byte 0	@ Priority
	.byte 0	@ Reverb

	.int voicegroup000

	.int gbs_route101_Ch1
	.int gbs_route101_Ch2
	.int gbs_route101_Ch3
	.int gbs_route101_Ch4
