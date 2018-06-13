	.file	"compliant1.c"
	.text
.Ltext0:
	.globl	main
	.type	main, @function
main:
.LFB2:
	.file 1 "compliant1.c"
	.loc 1 5 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%rsi, -64(%rbp)
	.loc 1 6 0
	movq	$0, -32(%rbp)
	.loc 1 7 0
	movq	$0, -24(%rbp)
	.loc 1 8 0
	movq	$0, -16(%rbp)
.LBB2:
	.loc 1 10 0
	movl	$1, -36(%rbp)
	jmp	.L2
.L5:
.LBB3:
	.loc 1 12 0
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	strlen
	movq	%rax, -8(%rbp)
	.loc 1 13 0
	movq	-32(%rbp), %rax
	subq	-24(%rbp), %rax
	cmpq	-8(%rbp), %rax
	ja	.L3
	.loc 1 15 0
	movq	-32(%rbp), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, -32(%rbp)
	.loc 1 16 0
	movq	-32(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	realloc
	movq	%rax, -16(%rbp)
	.loc 1 17 0
	cmpq	$0, -16(%rbp)
	jne	.L3
	.loc 1 19 0
	movl	$1, %eax
	jmp	.L4
.L3:
	.loc 1 22 0 discriminator 2
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rcx
	movq	-24(%rbp), %rdx
	addq	%rdx, %rcx
	movq	-8(%rbp), %rdx
	movq	%rax, %rsi
	movq	%rcx, %rdi
	call	memcpy
	.loc 1 23 0 discriminator 2
	movq	-8(%rbp), %rax
	addq	%rax, -24(%rbp)
	.loc 1 24 0 discriminator 2
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	addq	%rdx, %rax
	movb	$32, (%rax)
.LBE3:
	.loc 1 10 0 discriminator 2
	addl	$1, -36(%rbp)
.L2:
	.loc 1 10 0 is_stmt 0 discriminator 1
	movl	-36(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L5
.LBE2:
	.loc 1 26 0 is_stmt 1
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	.loc 1 30 0
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	free
	.loc 1 31 0
	movl	$0, %eax
.L4:
	.loc 1 32 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x142
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF16
	.byte	0xc
	.long	.LASF17
	.long	.LASF18
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF19
	.byte	0x2
	.byte	0xd8
	.long	0x38
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF1
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF4
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF5
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF6
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF7
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF8
	.uleb128 0x5
	.byte	0x8
	.long	0x54
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF9
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF10
	.uleb128 0x6
	.long	.LASF20
	.byte	0x1
	.byte	0x4
	.long	0x4d
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.long	0x13a
	.uleb128 0x7
	.long	.LASF11
	.byte	0x1
	.byte	0x4
	.long	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x7
	.long	.LASF12
	.byte	0x1
	.byte	0x4
	.long	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x8
	.long	.LASF13
	.byte	0x1
	.byte	0x6
	.long	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x8
	.long	.LASF14
	.byte	0x1
	.byte	0x7
	.long	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.long	.LASF15
	.byte	0x1
	.byte	0x8
	.long	0x7e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x9
	.quad	.LBB2
	.quad	.LBE2-.LBB2
	.uleb128 0xa
	.string	"i"
	.byte	0x1
	.byte	0xa
	.long	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x9
	.quad	.LBB3
	.quad	.LBE3-.LBB3
	.uleb128 0xa
	.string	"len"
	.byte	0x1
	.byte	0xc
	.long	0x140
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x7e
	.uleb128 0xb
	.long	0x2d
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF18:
	.string	"/home/issacs/Projects/C---tutorial/chapter 2/assignment6"
.LASF19:
	.string	"size_t"
.LASF20:
	.string	"main"
.LASF0:
	.string	"long unsigned int"
.LASF10:
	.string	"long long unsigned int"
.LASF17:
	.string	"compliant1.c"
.LASF14:
	.string	"buflen"
.LASF5:
	.string	"unsigned char"
.LASF3:
	.string	"char"
.LASF8:
	.string	"long int"
.LASF15:
	.string	"cmdline"
.LASF9:
	.string	"long long int"
.LASF11:
	.string	"argc"
.LASF16:
	.string	"GNU C11 5.4.0 20160609 -mtune=generic -march=x86-64 -g -fstack-protector-strong"
.LASF2:
	.string	"short unsigned int"
.LASF6:
	.string	"signed char"
.LASF12:
	.string	"argv"
.LASF13:
	.string	"bufsize"
.LASF7:
	.string	"short int"
.LASF4:
	.string	"unsigned int"
.LASF1:
	.string	"sizetype"
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
