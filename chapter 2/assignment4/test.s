   1              		.file	"test.c"
   2              		.intel_syntax noprefix
   3              	# GNU C11 (Debian 6.3.0-18+deb9u1) version 6.3.0 20170516 (x86_64-linux-gnu)
   4              	#	compiled by GNU C version 6.3.0 20170516, GMP version 6.1.2, MPFR version 3.1.5, MPC version 1.0.
   5              	# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
   6              	# options passed:  -imultiarch x86_64-linux-gnu test.c -masm=intel
   7              	# -mtune=generic -march=x86-64 -g -fverbose-asm
   8              	# options enabled:  -fPIC -fPIE -faggressive-loop-optimizations
   9              	# -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
  10              	# -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
  11              	# -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
  12              	# -fchkp-use-static-bounds -fchkp-use-static-const-bounds
  13              	# -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
  14              	# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
  15              	# -ffunction-cse -fgcse-lm -fgnu-runtime -fgnu-unique -fident
  16              	# -finline-atomics -fira-hoist-pressure -fira-share-save-slots
  17              	# -fira-share-spill-slots -fivopts -fkeep-static-consts
  18              	# -fleading-underscore -flifetime-dse -flto-odr-type-merging -fmath-errno
  19              	# -fmerge-debug-strings -fpeephole -fplt -fprefetch-loop-arrays
  20              	# -freg-struct-return -fsched-critical-path-heuristic
  21              	# -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
  22              	# -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
  23              	# -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
  24              	# -fsemantic-interposition -fshow-column -fsigned-zeros
  25              	# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
  26              	# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
  27              	# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  28              	# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
  29              	# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
  30              	# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
  31              	# -malign-stringops -mavx256-split-unaligned-load
  32              	# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
  33              	# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
  34              	# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper
  35              	
  36              		.text
  37              	.Ltext0:
  38              		.globl	add_data
  40              	add_data:
  41              	.LFB2:
  42              		.file 1 "test.c"
   1:test.c        **** #include <stdlib.h>
   2:test.c        **** #include "test.h"
   3:test.c        **** 
   4:test.c        **** /*
   5:test.c        **** * Testing a function that will add new data too a doubly linked list.
   6:test.c        **** /**/
   7:test.c        **** struct node* add_data(char* data)
   8:test.c        **** {
  43              		.loc 1 8 0
  44              		.cfi_startproc
  45 0000 55       		push	rbp	#
  46              		.cfi_def_cfa_offset 16
  47              		.cfi_offset 6, -16
  48 0001 4889E5   		mov	rbp, rsp	#,
  49              		.cfi_def_cfa_register 6
  50 0004 4883EC20 		sub	rsp, 32	#,
  51 0008 48897DE8 		mov	QWORD PTR -24[rbp], rdi	# data, data
   9:test.c        ****     struct node* head = NULL;
  52              		.loc 1 9 0
  53 000c 48C745F8 		mov	QWORD PTR -8[rbp], 0	# head,
  53      00000000 
  10:test.c        ****     struct node* new_node = (struct node*)malloc(sizeof(struct node));
  54              		.loc 1 10 0
  55 0014 BF100000 		mov	edi, 16	#,
  55      00
  56 0019 E8000000 		call	malloc@PLT	#
  56      00
  57 001e 488945F0 		mov	QWORD PTR -16[rbp], rax	# new_node, tmp89
  11:test.c        ****     new_node -> data = data;
  58              		.loc 1 11 0
  59 0022 488B45F0 		mov	rax, QWORD PTR -16[rbp]	# tmp90, new_node
  60 0026 488B55E8 		mov	rdx, QWORD PTR -24[rbp]	# tmp91, data
  61 002a 488910   		mov	QWORD PTR [rax], rdx	# new_node_4->data, tmp91
  12:test.c        ****     new_node -> next = head;
  62              		.loc 1 12 0
  63 002d 488B45F0 		mov	rax, QWORD PTR -16[rbp]	# tmp92, new_node
  64 0031 488B55F8 		mov	rdx, QWORD PTR -8[rbp]	# tmp93, head
  65 0035 48895008 		mov	QWORD PTR 8[rax], rdx	# new_node_4->next, tmp93
  13:test.c        ****     head = new_node;
  66              		.loc 1 13 0
  67 0039 488B45F0 		mov	rax, QWORD PTR -16[rbp]	# tmp94, new_node
  68 003d 488945F8 		mov	QWORD PTR -8[rbp], rax	# head, tmp94
  14:test.c        ****     return new_node;
  69              		.loc 1 14 0
  70 0041 488B45F0 		mov	rax, QWORD PTR -16[rbp]	# _9, new_node
  15:test.c        **** }
  71              		.loc 1 15 0
  72 0045 C9       		leave
  73              		.cfi_def_cfa 7, 8
  74 0046 C3       		ret
  75              		.cfi_endproc
  76              	.LFE2:
  78              		.globl	find_data
  80              	find_data:
  81              	.LFB3:
  16:test.c        **** /*
  17:test.c        **** * function to find a node via it's data
  18:test.c        **** /**/
  19:test.c        **** struct node* find_data(char* data)
  20:test.c        **** {
  82              		.loc 1 20 0
  83              		.cfi_startproc
  84 0047 55       		push	rbp	#
  85              		.cfi_def_cfa_offset 16
  86              		.cfi_offset 6, -16
  87 0048 4889E5   		mov	rbp, rsp	#,
  88              		.cfi_def_cfa_register 6
  89 004b 48897DF8 		mov	QWORD PTR -8[rbp], rdi	# data, data
  21:test.c        ****     
  22:test.c        **** }
  90              		.loc 1 22 0
  91 004f 90       		nop
  92 0050 5D       		pop	rbp	#
  93              		.cfi_def_cfa 7, 8
  94 0051 C3       		ret
  95              		.cfi_endproc
  96              	.LFE3:
  98              		.globl	rm_data
 100              	rm_data:
 101              	.LFB4:
  23:test.c        **** /*
  24:test.c        **** * function to delete a node
  25:test.c        **** /**/
  26:test.c        **** void rm_data(struct node node)
  27:test.c        **** {
 102              		.loc 1 27 0
 103              		.cfi_startproc
 104 0052 55       		push	rbp	#
 105              		.cfi_def_cfa_offset 16
 106              		.cfi_offset 6, -16
 107 0053 4889E5   		mov	rbp, rsp	#,
 108              		.cfi_def_cfa_register 6
 109 0056 4889F8   		mov	rax, rdi	# tmp88, node
 110 0059 4889F1   		mov	rcx, rsi	# tmp89, node
 111 005c 4889CA   		mov	rdx, rcx	#, tmp89
 112 005f 488945F0 		mov	QWORD PTR -16[rbp], rax	# node, tmp87
 113 0063 488955F8 		mov	QWORD PTR -8[rbp], rdx	# node,
  28:test.c        **** 
  29:test.c        **** }...
 114              		.loc 1 29 0
 115 0067 90       		nop
 116 0068 5D       		pop	rbp	#
 117              		.cfi_def_cfa 7, 8
 118 0069 C3       		ret
 119              		.cfi_endproc
 120              	.LFE4:
 122              	.Letext0:
 123              		.file 2 "test.h"
