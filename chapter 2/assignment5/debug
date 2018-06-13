	.file	"tree.c"
	.text
.Ltext0:
	.globl	create_node
	.type	create_node, @function
create_node:
.LFB2:
	.file 1 "tree.c"
	.loc 1 10 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	.loc 1 11 0
	movl	$24, %edi
	call	malloc
	movq	%rax, -8(%rbp)
	.loc 1 12 0
	movq	-8(%rbp), %rax
	movq	$0, (%rax)
	.loc 1 13 0
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	.loc 1 14 0
	movq	-8(%rbp), %rax
	movl	-20(%rbp), %edx
	movl	%edx, 16(%rax)
	.loc 1 15 0
	movq	-8(%rbp), %rax
	.loc 1 16 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	create_node, .-create_node
	.globl	insert_node
	.type	insert_node, @function
insert_node:
.LFB3:
	.loc 1 18 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	.loc 1 19 0
	cmpq	$0, -8(%rbp)
	je	.L4
	.loc 1 20 0
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	-12(%rbp), %eax
	jl	.L5
	.loc 1 22 0
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, %rdx
	.loc 1 21 0
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	jmp	.L6
.L5:
	.loc 1 25 0
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, %rdx
	.loc 1 24 0
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
.L6:
	.loc 1 27 0
	movq	-8(%rbp), %rax
	jmp	.L7
.L4:
	.loc 1 29 0
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	create_node
.L7:
	.loc 1 31 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	insert_node, .-insert_node
	.globl	delete_tree
	.type	delete_tree, @function
delete_tree:
.LFB4:
	.loc 1 35 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	.loc 1 36 0
	cmpq	$0, -8(%rbp)
	je	.L10
	.loc 1 37 0
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	delete_tree
	.loc 1 38 0
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	delete_tree
	.loc 1 39 0
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	free
.L10:
	.loc 1 41 0
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	delete_tree, .-delete_tree
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	print_tree
	.type	print_tree, @function
print_tree:
.LFB5:
	.loc 1 43 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	.loc 1 44 0
	cmpq	$0, -8(%rbp)
	je	.L13
	.loc 1 45 0
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	print_tree
	.loc 1 46 0
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	print_tree
	.loc 1 47 0
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
.L13:
	.loc 1 49 0
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	print_tree, .-print_tree
	.globl	size_tree
	.type	size_tree, @function
size_tree:
.LFB6:
	.loc 1 51 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	.loc 1 52 0
	cmpq	$0, -24(%rbp)
	je	.L15
	.loc 1 53 0
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	size_tree
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdi
	call	size_tree
	addq	%rbx, %rax
	addq	$1, %rax
	jmp	.L16
.L15:
	.loc 1 55 0
	movl	$0, %eax
.L16:
	.loc 1 57 0
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	size_tree, .-size_tree
	.globl	reduce_tree
	.type	reduce_tree, @function
reduce_tree:
.LFB7:
	.loc 1 59 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	.loc 1 60 0
	cmpq	$0, -8(%rbp)
	je	.L19
	.loc 1 61 0
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	reduce_tree
	.loc 1 62 0
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	reduce_tree
	.loc 1 63 0
	movq	-8(%rbp), %rax
	movl	16(%rax), %edx
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movl	%edx, %edi
	call	*%rax
.L19:
	.loc 1 65 0
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	reduce_tree, .-reduce_tree
	.globl	sum
	.type	sum, @function
sum:
.LFB8:
	.loc 1 67 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	.loc 1 68 0
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	.loc 1 69 0
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	sum, .-sum
	.globl	mult
	.type	mult, @function
mult:
.LFB9:
	.loc 1 71 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	.loc 1 72 0
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	imull	-4(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	.loc 1 73 0
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	mult, .-mult
	.section	.rodata
.LC1:
	.string	"Tree has %zu items.\n"
	.text
	.globl	build_demo_tree
	.type	build_demo_tree, @function
build_demo_tree:
.LFB10:
	.loc 1 75 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	.loc 1 76 0
	movl	$-1, %esi
	movl	$0, %edi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 77 0
	movq	-8(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 78 0
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 79 0
	movq	-8(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 80 0
	movq	-8(%rbp), %rax
	movl	$11, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 81 0
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	insert_node
	movq	%rax, -8(%rbp)
	.loc 1 82 0
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	print_tree
	.loc 1 83 0
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	size_tree
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	.loc 1 87 0
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	delete_tree
	.loc 1 88 0
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	build_demo_tree, .-build_demo_tree
	.globl	main
	.type	main, @function
main:
.LFB11:
	.loc 1 90 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	.loc 1 91 0
	call	build_demo_tree
	.loc 1 92 0
	movl	$0, %eax
	.loc 1 93 0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
.Letext0:
	.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x2f2
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF28
	.byte	0xc
	.long	.LASF29
	.long	.LASF30
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF14
	.byte	0x2
	.byte	0xd8
	.long	0x38
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF8
	.uleb128 0x5
	.byte	0x8
	.long	0x62
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF9
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF10
	.uleb128 0x6
	.long	.LASF31
	.byte	0x18
	.byte	0x1
	.byte	0x4
	.long	0xc3
	.uleb128 0x7
	.long	.LASF11
	.byte	0x1
	.byte	0x5
	.long	0xc3
	.byte	0
	.uleb128 0x7
	.long	.LASF12
	.byte	0x1
	.byte	0x6
	.long	0xc3
	.byte	0x8
	.uleb128 0x7
	.long	.LASF13
	.byte	0x1
	.byte	0x7
	.long	0x62
	.byte	0x10
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x92
	.uleb128 0x2
	.long	.LASF15
	.byte	0x1
	.byte	0x8
	.long	0x92
	.uleb128 0x8
	.long	.LASF16
	.byte	0x1
	.byte	0xa
	.long	0x112
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.long	0x112
	.uleb128 0x9
	.long	.LASF13
	.byte	0x1
	.byte	0xa
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.long	.LASF27
	.byte	0x1
	.byte	0xb
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0xc9
	.uleb128 0x8
	.long	.LASF17
	.byte	0x1
	.byte	0x12
	.long	0x112
	.quad	.LFB3
	.quad	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.long	0x156
	.uleb128 0x9
	.long	.LASF18
	.byte	0x1
	.byte	0x12
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.long	.LASF13
	.byte	0x1
	.byte	0x12
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0xb
	.long	.LASF19
	.byte	0x1
	.byte	0x23
	.quad	.LFB4
	.quad	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.long	0x182
	.uleb128 0x9
	.long	.LASF18
	.byte	0x1
	.byte	0x23
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.long	.LASF20
	.byte	0x1
	.byte	0x2b
	.quad	.LFB5
	.quad	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.long	0x1ae
	.uleb128 0x9
	.long	.LASF18
	.byte	0x1
	.byte	0x2b
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.long	.LASF21
	.byte	0x1
	.byte	0x33
	.long	0x2d
	.quad	.LFB6
	.quad	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.long	0x1de
	.uleb128 0x9
	.long	.LASF18
	.byte	0x1
	.byte	0x33
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xb
	.long	.LASF22
	.byte	0x1
	.byte	0x3b
	.quad	.LFB7
	.quad	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.long	0x226
	.uleb128 0x9
	.long	.LASF18
	.byte	0x1
	.byte	0x3b
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.long	.LASF23
	.byte	0x1
	.byte	0x3b
	.long	0x236
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x9
	.long	.LASF24
	.byte	0x1
	.byte	0x3b
	.long	0x7e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xc
	.long	0x236
	.uleb128 0xd
	.long	0x62
	.uleb128 0xd
	.long	0x7e
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x226
	.uleb128 0xe
	.string	"sum"
	.byte	0x1
	.byte	0x43
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.long	0x274
	.uleb128 0xf
	.string	"x"
	.byte	0x1
	.byte	0x43
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.long	.LASF24
	.byte	0x1
	.byte	0x43
	.long	0x7e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x10
	.long	.LASF25
	.byte	0x1
	.byte	0x47
	.quad	.LFB9
	.quad	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.long	0x2ac
	.uleb128 0xf
	.string	"x"
	.byte	0x1
	.byte	0x47
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.long	.LASF24
	.byte	0x1
	.byte	0x47
	.long	0x7e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xb
	.long	.LASF26
	.byte	0x1
	.byte	0x4b
	.quad	.LFB10
	.quad	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.long	0x2d8
	.uleb128 0xa
	.long	.LASF18
	.byte	0x1
	.byte	0x4c
	.long	0x112
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x11
	.long	.LASF32
	.byte	0x1
	.byte	0x5a
	.long	0x62
	.quad	.LFB11
	.quad	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
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
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
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
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xc
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x5
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
	.uleb128 0x10
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
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0
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
.LASF14:
	.string	"size_t"
.LASF25:
	.string	"mult"
.LASF13:
	.string	"value"
.LASF11:
	.string	"left"
.LASF6:
	.string	"long int"
.LASF29:
	.string	"tree.c"
.LASF28:
	.string	"GNU C11 5.4.0 20160609 -mtune=generic -march=x86-64 -g -fstack-protector-strong"
.LASF31:
	.string	"Node_s"
.LASF17:
	.string	"insert_node"
.LASF1:
	.string	"unsigned char"
.LASF12:
	.string	"right"
.LASF2:
	.string	"short unsigned int"
.LASF26:
	.string	"build_demo_tree"
.LASF16:
	.string	"create_node"
.LASF0:
	.string	"long unsigned int"
.LASF32:
	.string	"main"
.LASF21:
	.string	"size_tree"
.LASF18:
	.string	"tree"
.LASF3:
	.string	"unsigned int"
.LASF10:
	.string	"long long unsigned int"
.LASF24:
	.string	"result"
.LASF30:
	.string	"/home/issacs/Projects/C---tutorial/chapter 2/assignment5"
.LASF7:
	.string	"sizetype"
.LASF9:
	.string	"long long int"
.LASF8:
	.string	"char"
.LASF19:
	.string	"delete_tree"
.LASF22:
	.string	"reduce_tree"
.LASF5:
	.string	"short int"
.LASF27:
	.string	"node"
.LASF23:
	.string	"f_ptr"
.LASF15:
	.string	"Node"
.LASF4:
	.string	"signed char"
.LASF20:
	.string	"print_tree"
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
