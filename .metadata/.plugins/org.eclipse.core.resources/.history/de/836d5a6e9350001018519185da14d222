
250623_TimeWatch_StopWatch.elf:     file format elf32-littlearm


Disassembly of section .text:

08000198 <__do_global_dtors_aux>:
 8000198:	b510      	push	{r4, lr}
 800019a:	4c05      	ldr	r4, [pc, #20]	@ (80001b0 <__do_global_dtors_aux+0x18>)
 800019c:	7823      	ldrb	r3, [r4, #0]
 800019e:	b933      	cbnz	r3, 80001ae <__do_global_dtors_aux+0x16>
 80001a0:	4b04      	ldr	r3, [pc, #16]	@ (80001b4 <__do_global_dtors_aux+0x1c>)
 80001a2:	b113      	cbz	r3, 80001aa <__do_global_dtors_aux+0x12>
 80001a4:	4804      	ldr	r0, [pc, #16]	@ (80001b8 <__do_global_dtors_aux+0x20>)
 80001a6:	f3af 8000 	nop.w
 80001aa:	2301      	movs	r3, #1
 80001ac:	7023      	strb	r3, [r4, #0]
 80001ae:	bd10      	pop	{r4, pc}
 80001b0:	2000006c 	.word	0x2000006c
 80001b4:	00000000 	.word	0x00000000
 80001b8:	080023ac 	.word	0x080023ac

080001bc <frame_dummy>:
 80001bc:	b508      	push	{r3, lr}
 80001be:	4b03      	ldr	r3, [pc, #12]	@ (80001cc <frame_dummy+0x10>)
 80001c0:	b11b      	cbz	r3, 80001ca <frame_dummy+0xe>
 80001c2:	4903      	ldr	r1, [pc, #12]	@ (80001d0 <frame_dummy+0x14>)
 80001c4:	4803      	ldr	r0, [pc, #12]	@ (80001d4 <frame_dummy+0x18>)
 80001c6:	f3af 8000 	nop.w
 80001ca:	bd08      	pop	{r3, pc}
 80001cc:	00000000 	.word	0x00000000
 80001d0:	20000070 	.word	0x20000070
 80001d4:	080023ac 	.word	0x080023ac

080001d8 <__aeabi_uldivmod>:
 80001d8:	b953      	cbnz	r3, 80001f0 <__aeabi_uldivmod+0x18>
 80001da:	b94a      	cbnz	r2, 80001f0 <__aeabi_uldivmod+0x18>
 80001dc:	2900      	cmp	r1, #0
 80001de:	bf08      	it	eq
 80001e0:	2800      	cmpeq	r0, #0
 80001e2:	bf1c      	itt	ne
 80001e4:	f04f 31ff 	movne.w	r1, #4294967295
 80001e8:	f04f 30ff 	movne.w	r0, #4294967295
 80001ec:	f000 b988 	b.w	8000500 <__aeabi_idiv0>
 80001f0:	f1ad 0c08 	sub.w	ip, sp, #8
 80001f4:	e96d ce04 	strd	ip, lr, [sp, #-16]!
 80001f8:	f000 f806 	bl	8000208 <__udivmoddi4>
 80001fc:	f8dd e004 	ldr.w	lr, [sp, #4]
 8000200:	e9dd 2302 	ldrd	r2, r3, [sp, #8]
 8000204:	b004      	add	sp, #16
 8000206:	4770      	bx	lr

08000208 <__udivmoddi4>:
 8000208:	e92d 47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
 800020c:	9d08      	ldr	r5, [sp, #32]
 800020e:	468e      	mov	lr, r1
 8000210:	4604      	mov	r4, r0
 8000212:	4688      	mov	r8, r1
 8000214:	2b00      	cmp	r3, #0
 8000216:	d14a      	bne.n	80002ae <__udivmoddi4+0xa6>
 8000218:	428a      	cmp	r2, r1
 800021a:	4617      	mov	r7, r2
 800021c:	d962      	bls.n	80002e4 <__udivmoddi4+0xdc>
 800021e:	fab2 f682 	clz	r6, r2
 8000222:	b14e      	cbz	r6, 8000238 <__udivmoddi4+0x30>
 8000224:	f1c6 0320 	rsb	r3, r6, #32
 8000228:	fa01 f806 	lsl.w	r8, r1, r6
 800022c:	fa20 f303 	lsr.w	r3, r0, r3
 8000230:	40b7      	lsls	r7, r6
 8000232:	ea43 0808 	orr.w	r8, r3, r8
 8000236:	40b4      	lsls	r4, r6
 8000238:	ea4f 4e17 	mov.w	lr, r7, lsr #16
 800023c:	fa1f fc87 	uxth.w	ip, r7
 8000240:	fbb8 f1fe 	udiv	r1, r8, lr
 8000244:	0c23      	lsrs	r3, r4, #16
 8000246:	fb0e 8811 	mls	r8, lr, r1, r8
 800024a:	ea43 4308 	orr.w	r3, r3, r8, lsl #16
 800024e:	fb01 f20c 	mul.w	r2, r1, ip
 8000252:	429a      	cmp	r2, r3
 8000254:	d909      	bls.n	800026a <__udivmoddi4+0x62>
 8000256:	18fb      	adds	r3, r7, r3
 8000258:	f101 30ff 	add.w	r0, r1, #4294967295
 800025c:	f080 80ea 	bcs.w	8000434 <__udivmoddi4+0x22c>
 8000260:	429a      	cmp	r2, r3
 8000262:	f240 80e7 	bls.w	8000434 <__udivmoddi4+0x22c>
 8000266:	3902      	subs	r1, #2
 8000268:	443b      	add	r3, r7
 800026a:	1a9a      	subs	r2, r3, r2
 800026c:	b2a3      	uxth	r3, r4
 800026e:	fbb2 f0fe 	udiv	r0, r2, lr
 8000272:	fb0e 2210 	mls	r2, lr, r0, r2
 8000276:	ea43 4302 	orr.w	r3, r3, r2, lsl #16
 800027a:	fb00 fc0c 	mul.w	ip, r0, ip
 800027e:	459c      	cmp	ip, r3
 8000280:	d909      	bls.n	8000296 <__udivmoddi4+0x8e>
 8000282:	18fb      	adds	r3, r7, r3
 8000284:	f100 32ff 	add.w	r2, r0, #4294967295
 8000288:	f080 80d6 	bcs.w	8000438 <__udivmoddi4+0x230>
 800028c:	459c      	cmp	ip, r3
 800028e:	f240 80d3 	bls.w	8000438 <__udivmoddi4+0x230>
 8000292:	443b      	add	r3, r7
 8000294:	3802      	subs	r0, #2
 8000296:	ea40 4001 	orr.w	r0, r0, r1, lsl #16
 800029a:	eba3 030c 	sub.w	r3, r3, ip
 800029e:	2100      	movs	r1, #0
 80002a0:	b11d      	cbz	r5, 80002aa <__udivmoddi4+0xa2>
 80002a2:	40f3      	lsrs	r3, r6
 80002a4:	2200      	movs	r2, #0
 80002a6:	e9c5 3200 	strd	r3, r2, [r5]
 80002aa:	e8bd 87f0 	ldmia.w	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
 80002ae:	428b      	cmp	r3, r1
 80002b0:	d905      	bls.n	80002be <__udivmoddi4+0xb6>
 80002b2:	b10d      	cbz	r5, 80002b8 <__udivmoddi4+0xb0>
 80002b4:	e9c5 0100 	strd	r0, r1, [r5]
 80002b8:	2100      	movs	r1, #0
 80002ba:	4608      	mov	r0, r1
 80002bc:	e7f5      	b.n	80002aa <__udivmoddi4+0xa2>
 80002be:	fab3 f183 	clz	r1, r3
 80002c2:	2900      	cmp	r1, #0
 80002c4:	d146      	bne.n	8000354 <__udivmoddi4+0x14c>
 80002c6:	4573      	cmp	r3, lr
 80002c8:	d302      	bcc.n	80002d0 <__udivmoddi4+0xc8>
 80002ca:	4282      	cmp	r2, r0
 80002cc:	f200 8105 	bhi.w	80004da <__udivmoddi4+0x2d2>
 80002d0:	1a84      	subs	r4, r0, r2
 80002d2:	eb6e 0203 	sbc.w	r2, lr, r3
 80002d6:	2001      	movs	r0, #1
 80002d8:	4690      	mov	r8, r2
 80002da:	2d00      	cmp	r5, #0
 80002dc:	d0e5      	beq.n	80002aa <__udivmoddi4+0xa2>
 80002de:	e9c5 4800 	strd	r4, r8, [r5]
 80002e2:	e7e2      	b.n	80002aa <__udivmoddi4+0xa2>
 80002e4:	2a00      	cmp	r2, #0
 80002e6:	f000 8090 	beq.w	800040a <__udivmoddi4+0x202>
 80002ea:	fab2 f682 	clz	r6, r2
 80002ee:	2e00      	cmp	r6, #0
 80002f0:	f040 80a4 	bne.w	800043c <__udivmoddi4+0x234>
 80002f4:	1a8a      	subs	r2, r1, r2
 80002f6:	0c03      	lsrs	r3, r0, #16
 80002f8:	ea4f 4e17 	mov.w	lr, r7, lsr #16
 80002fc:	b280      	uxth	r0, r0
 80002fe:	b2bc      	uxth	r4, r7
 8000300:	2101      	movs	r1, #1
 8000302:	fbb2 fcfe 	udiv	ip, r2, lr
 8000306:	fb0e 221c 	mls	r2, lr, ip, r2
 800030a:	ea43 4302 	orr.w	r3, r3, r2, lsl #16
 800030e:	fb04 f20c 	mul.w	r2, r4, ip
 8000312:	429a      	cmp	r2, r3
 8000314:	d907      	bls.n	8000326 <__udivmoddi4+0x11e>
 8000316:	18fb      	adds	r3, r7, r3
 8000318:	f10c 38ff 	add.w	r8, ip, #4294967295
 800031c:	d202      	bcs.n	8000324 <__udivmoddi4+0x11c>
 800031e:	429a      	cmp	r2, r3
 8000320:	f200 80e0 	bhi.w	80004e4 <__udivmoddi4+0x2dc>
 8000324:	46c4      	mov	ip, r8
 8000326:	1a9b      	subs	r3, r3, r2
 8000328:	fbb3 f2fe 	udiv	r2, r3, lr
 800032c:	fb0e 3312 	mls	r3, lr, r2, r3
 8000330:	ea40 4303 	orr.w	r3, r0, r3, lsl #16
 8000334:	fb02 f404 	mul.w	r4, r2, r4
 8000338:	429c      	cmp	r4, r3
 800033a:	d907      	bls.n	800034c <__udivmoddi4+0x144>
 800033c:	18fb      	adds	r3, r7, r3
 800033e:	f102 30ff 	add.w	r0, r2, #4294967295
 8000342:	d202      	bcs.n	800034a <__udivmoddi4+0x142>
 8000344:	429c      	cmp	r4, r3
 8000346:	f200 80ca 	bhi.w	80004de <__udivmoddi4+0x2d6>
 800034a:	4602      	mov	r2, r0
 800034c:	1b1b      	subs	r3, r3, r4
 800034e:	ea42 400c 	orr.w	r0, r2, ip, lsl #16
 8000352:	e7a5      	b.n	80002a0 <__udivmoddi4+0x98>
 8000354:	f1c1 0620 	rsb	r6, r1, #32
 8000358:	408b      	lsls	r3, r1
 800035a:	fa22 f706 	lsr.w	r7, r2, r6
 800035e:	431f      	orrs	r7, r3
 8000360:	fa0e f401 	lsl.w	r4, lr, r1
 8000364:	fa20 f306 	lsr.w	r3, r0, r6
 8000368:	fa2e fe06 	lsr.w	lr, lr, r6
 800036c:	ea4f 4917 	mov.w	r9, r7, lsr #16
 8000370:	4323      	orrs	r3, r4
 8000372:	fa00 f801 	lsl.w	r8, r0, r1
 8000376:	fa1f fc87 	uxth.w	ip, r7
 800037a:	fbbe f0f9 	udiv	r0, lr, r9
 800037e:	0c1c      	lsrs	r4, r3, #16
 8000380:	fb09 ee10 	mls	lr, r9, r0, lr
 8000384:	ea44 440e 	orr.w	r4, r4, lr, lsl #16
 8000388:	fb00 fe0c 	mul.w	lr, r0, ip
 800038c:	45a6      	cmp	lr, r4
 800038e:	fa02 f201 	lsl.w	r2, r2, r1
 8000392:	d909      	bls.n	80003a8 <__udivmoddi4+0x1a0>
 8000394:	193c      	adds	r4, r7, r4
 8000396:	f100 3aff 	add.w	sl, r0, #4294967295
 800039a:	f080 809c 	bcs.w	80004d6 <__udivmoddi4+0x2ce>
 800039e:	45a6      	cmp	lr, r4
 80003a0:	f240 8099 	bls.w	80004d6 <__udivmoddi4+0x2ce>
 80003a4:	3802      	subs	r0, #2
 80003a6:	443c      	add	r4, r7
 80003a8:	eba4 040e 	sub.w	r4, r4, lr
 80003ac:	fa1f fe83 	uxth.w	lr, r3
 80003b0:	fbb4 f3f9 	udiv	r3, r4, r9
 80003b4:	fb09 4413 	mls	r4, r9, r3, r4
 80003b8:	ea4e 4404 	orr.w	r4, lr, r4, lsl #16
 80003bc:	fb03 fc0c 	mul.w	ip, r3, ip
 80003c0:	45a4      	cmp	ip, r4
 80003c2:	d908      	bls.n	80003d6 <__udivmoddi4+0x1ce>
 80003c4:	193c      	adds	r4, r7, r4
 80003c6:	f103 3eff 	add.w	lr, r3, #4294967295
 80003ca:	f080 8082 	bcs.w	80004d2 <__udivmoddi4+0x2ca>
 80003ce:	45a4      	cmp	ip, r4
 80003d0:	d97f      	bls.n	80004d2 <__udivmoddi4+0x2ca>
 80003d2:	3b02      	subs	r3, #2
 80003d4:	443c      	add	r4, r7
 80003d6:	ea43 4000 	orr.w	r0, r3, r0, lsl #16
 80003da:	eba4 040c 	sub.w	r4, r4, ip
 80003de:	fba0 ec02 	umull	lr, ip, r0, r2
 80003e2:	4564      	cmp	r4, ip
 80003e4:	4673      	mov	r3, lr
 80003e6:	46e1      	mov	r9, ip
 80003e8:	d362      	bcc.n	80004b0 <__udivmoddi4+0x2a8>
 80003ea:	d05f      	beq.n	80004ac <__udivmoddi4+0x2a4>
 80003ec:	b15d      	cbz	r5, 8000406 <__udivmoddi4+0x1fe>
 80003ee:	ebb8 0203 	subs.w	r2, r8, r3
 80003f2:	eb64 0409 	sbc.w	r4, r4, r9
 80003f6:	fa04 f606 	lsl.w	r6, r4, r6
 80003fa:	fa22 f301 	lsr.w	r3, r2, r1
 80003fe:	431e      	orrs	r6, r3
 8000400:	40cc      	lsrs	r4, r1
 8000402:	e9c5 6400 	strd	r6, r4, [r5]
 8000406:	2100      	movs	r1, #0
 8000408:	e74f      	b.n	80002aa <__udivmoddi4+0xa2>
 800040a:	fbb1 fcf2 	udiv	ip, r1, r2
 800040e:	0c01      	lsrs	r1, r0, #16
 8000410:	ea41 410e 	orr.w	r1, r1, lr, lsl #16
 8000414:	b280      	uxth	r0, r0
 8000416:	ea40 4201 	orr.w	r2, r0, r1, lsl #16
 800041a:	463b      	mov	r3, r7
 800041c:	4638      	mov	r0, r7
 800041e:	463c      	mov	r4, r7
 8000420:	46b8      	mov	r8, r7
 8000422:	46be      	mov	lr, r7
 8000424:	2620      	movs	r6, #32
 8000426:	fbb1 f1f7 	udiv	r1, r1, r7
 800042a:	eba2 0208 	sub.w	r2, r2, r8
 800042e:	ea41 410c 	orr.w	r1, r1, ip, lsl #16
 8000432:	e766      	b.n	8000302 <__udivmoddi4+0xfa>
 8000434:	4601      	mov	r1, r0
 8000436:	e718      	b.n	800026a <__udivmoddi4+0x62>
 8000438:	4610      	mov	r0, r2
 800043a:	e72c      	b.n	8000296 <__udivmoddi4+0x8e>
 800043c:	f1c6 0220 	rsb	r2, r6, #32
 8000440:	fa2e f302 	lsr.w	r3, lr, r2
 8000444:	40b7      	lsls	r7, r6
 8000446:	40b1      	lsls	r1, r6
 8000448:	fa20 f202 	lsr.w	r2, r0, r2
 800044c:	ea4f 4e17 	mov.w	lr, r7, lsr #16
 8000450:	430a      	orrs	r2, r1
 8000452:	fbb3 f8fe 	udiv	r8, r3, lr
 8000456:	b2bc      	uxth	r4, r7
 8000458:	fb0e 3318 	mls	r3, lr, r8, r3
 800045c:	0c11      	lsrs	r1, r2, #16
 800045e:	ea41 4103 	orr.w	r1, r1, r3, lsl #16
 8000462:	fb08 f904 	mul.w	r9, r8, r4
 8000466:	40b0      	lsls	r0, r6
 8000468:	4589      	cmp	r9, r1
 800046a:	ea4f 4310 	mov.w	r3, r0, lsr #16
 800046e:	b280      	uxth	r0, r0
 8000470:	d93e      	bls.n	80004f0 <__udivmoddi4+0x2e8>
 8000472:	1879      	adds	r1, r7, r1
 8000474:	f108 3cff 	add.w	ip, r8, #4294967295
 8000478:	d201      	bcs.n	800047e <__udivmoddi4+0x276>
 800047a:	4589      	cmp	r9, r1
 800047c:	d81f      	bhi.n	80004be <__udivmoddi4+0x2b6>
 800047e:	eba1 0109 	sub.w	r1, r1, r9
 8000482:	fbb1 f9fe 	udiv	r9, r1, lr
 8000486:	fb09 f804 	mul.w	r8, r9, r4
 800048a:	fb0e 1119 	mls	r1, lr, r9, r1
 800048e:	b292      	uxth	r2, r2
 8000490:	ea42 4201 	orr.w	r2, r2, r1, lsl #16
 8000494:	4542      	cmp	r2, r8
 8000496:	d229      	bcs.n	80004ec <__udivmoddi4+0x2e4>
 8000498:	18ba      	adds	r2, r7, r2
 800049a:	f109 31ff 	add.w	r1, r9, #4294967295
 800049e:	d2c4      	bcs.n	800042a <__udivmoddi4+0x222>
 80004a0:	4542      	cmp	r2, r8
 80004a2:	d2c2      	bcs.n	800042a <__udivmoddi4+0x222>
 80004a4:	f1a9 0102 	sub.w	r1, r9, #2
 80004a8:	443a      	add	r2, r7
 80004aa:	e7be      	b.n	800042a <__udivmoddi4+0x222>
 80004ac:	45f0      	cmp	r8, lr
 80004ae:	d29d      	bcs.n	80003ec <__udivmoddi4+0x1e4>
 80004b0:	ebbe 0302 	subs.w	r3, lr, r2
 80004b4:	eb6c 0c07 	sbc.w	ip, ip, r7
 80004b8:	3801      	subs	r0, #1
 80004ba:	46e1      	mov	r9, ip
 80004bc:	e796      	b.n	80003ec <__udivmoddi4+0x1e4>
 80004be:	eba7 0909 	sub.w	r9, r7, r9
 80004c2:	4449      	add	r1, r9
 80004c4:	f1a8 0c02 	sub.w	ip, r8, #2
 80004c8:	fbb1 f9fe 	udiv	r9, r1, lr
 80004cc:	fb09 f804 	mul.w	r8, r9, r4
 80004d0:	e7db      	b.n	800048a <__udivmoddi4+0x282>
 80004d2:	4673      	mov	r3, lr
 80004d4:	e77f      	b.n	80003d6 <__udivmoddi4+0x1ce>
 80004d6:	4650      	mov	r0, sl
 80004d8:	e766      	b.n	80003a8 <__udivmoddi4+0x1a0>
 80004da:	4608      	mov	r0, r1
 80004dc:	e6fd      	b.n	80002da <__udivmoddi4+0xd2>
 80004de:	443b      	add	r3, r7
 80004e0:	3a02      	subs	r2, #2
 80004e2:	e733      	b.n	800034c <__udivmoddi4+0x144>
 80004e4:	f1ac 0c02 	sub.w	ip, ip, #2
 80004e8:	443b      	add	r3, r7
 80004ea:	e71c      	b.n	8000326 <__udivmoddi4+0x11e>
 80004ec:	4649      	mov	r1, r9
 80004ee:	e79c      	b.n	800042a <__udivmoddi4+0x222>
 80004f0:	eba1 0109 	sub.w	r1, r1, r9
 80004f4:	46c4      	mov	ip, r8
 80004f6:	fbb1 f9fe 	udiv	r9, r1, lr
 80004fa:	fb09 f804 	mul.w	r8, r9, r4
 80004fe:	e7c4      	b.n	800048a <__udivmoddi4+0x282>

08000500 <__aeabi_idiv0>:
 8000500:	4770      	bx	lr
 8000502:	bf00      	nop

08000504 <MX_GPIO_Init>:
 8000504:	b580      	push	{r7, lr}
 8000506:	b08a      	sub	sp, #40	@ 0x28
 8000508:	af00      	add	r7, sp, #0
 800050a:	f107 0314 	add.w	r3, r7, #20
 800050e:	2200      	movs	r2, #0
 8000510:	601a      	str	r2, [r3, #0]
 8000512:	605a      	str	r2, [r3, #4]
 8000514:	609a      	str	r2, [r3, #8]
 8000516:	60da      	str	r2, [r3, #12]
 8000518:	611a      	str	r2, [r3, #16]
 800051a:	2300      	movs	r3, #0
 800051c:	613b      	str	r3, [r7, #16]
 800051e:	4b49      	ldr	r3, [pc, #292]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000520:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 8000522:	4a48      	ldr	r2, [pc, #288]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000524:	f043 0380 	orr.w	r3, r3, #128	@ 0x80
 8000528:	6313      	str	r3, [r2, #48]	@ 0x30
 800052a:	4b46      	ldr	r3, [pc, #280]	@ (8000644 <MX_GPIO_Init+0x140>)
 800052c:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 800052e:	f003 0380 	and.w	r3, r3, #128	@ 0x80
 8000532:	613b      	str	r3, [r7, #16]
 8000534:	693b      	ldr	r3, [r7, #16]
 8000536:	2300      	movs	r3, #0
 8000538:	60fb      	str	r3, [r7, #12]
 800053a:	4b42      	ldr	r3, [pc, #264]	@ (8000644 <MX_GPIO_Init+0x140>)
 800053c:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 800053e:	4a41      	ldr	r2, [pc, #260]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000540:	f043 0304 	orr.w	r3, r3, #4
 8000544:	6313      	str	r3, [r2, #48]	@ 0x30
 8000546:	4b3f      	ldr	r3, [pc, #252]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000548:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 800054a:	f003 0304 	and.w	r3, r3, #4
 800054e:	60fb      	str	r3, [r7, #12]
 8000550:	68fb      	ldr	r3, [r7, #12]
 8000552:	2300      	movs	r3, #0
 8000554:	60bb      	str	r3, [r7, #8]
 8000556:	4b3b      	ldr	r3, [pc, #236]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000558:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 800055a:	4a3a      	ldr	r2, [pc, #232]	@ (8000644 <MX_GPIO_Init+0x140>)
 800055c:	f043 0302 	orr.w	r3, r3, #2
 8000560:	6313      	str	r3, [r2, #48]	@ 0x30
 8000562:	4b38      	ldr	r3, [pc, #224]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000564:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 8000566:	f003 0302 	and.w	r3, r3, #2
 800056a:	60bb      	str	r3, [r7, #8]
 800056c:	68bb      	ldr	r3, [r7, #8]
 800056e:	2300      	movs	r3, #0
 8000570:	607b      	str	r3, [r7, #4]
 8000572:	4b34      	ldr	r3, [pc, #208]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000574:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 8000576:	4a33      	ldr	r2, [pc, #204]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000578:	f043 0301 	orr.w	r3, r3, #1
 800057c:	6313      	str	r3, [r2, #48]	@ 0x30
 800057e:	4b31      	ldr	r3, [pc, #196]	@ (8000644 <MX_GPIO_Init+0x140>)
 8000580:	6b1b      	ldr	r3, [r3, #48]	@ 0x30
 8000582:	f003 0301 	and.w	r3, r3, #1
 8000586:	607b      	str	r3, [r7, #4]
 8000588:	687b      	ldr	r3, [r7, #4]
 800058a:	2200      	movs	r2, #0
 800058c:	f44f 71b8 	mov.w	r1, #368	@ 0x170
 8000590:	482d      	ldr	r0, [pc, #180]	@ (8000648 <MX_GPIO_Init+0x144>)
 8000592:	f000 fe2d 	bl	80011f0 <HAL_GPIO_WritePin>
 8000596:	2200      	movs	r2, #0
 8000598:	f24f 0106 	movw	r1, #61446	@ 0xf006
 800059c:	482b      	ldr	r0, [pc, #172]	@ (800064c <MX_GPIO_Init+0x148>)
 800059e:	f000 fe27 	bl	80011f0 <HAL_GPIO_WritePin>
 80005a2:	2200      	movs	r2, #0
 80005a4:	f44f 51c0 	mov.w	r1, #6144	@ 0x1800
 80005a8:	4829      	ldr	r0, [pc, #164]	@ (8000650 <MX_GPIO_Init+0x14c>)
 80005aa:	f000 fe21 	bl	80011f0 <HAL_GPIO_WritePin>
 80005ae:	f44f 73b8 	mov.w	r3, #368	@ 0x170
 80005b2:	617b      	str	r3, [r7, #20]
 80005b4:	2301      	movs	r3, #1
 80005b6:	61bb      	str	r3, [r7, #24]
 80005b8:	2300      	movs	r3, #0
 80005ba:	61fb      	str	r3, [r7, #28]
 80005bc:	2300      	movs	r3, #0
 80005be:	623b      	str	r3, [r7, #32]
 80005c0:	f107 0314 	add.w	r3, r7, #20
 80005c4:	4619      	mov	r1, r3
 80005c6:	4820      	ldr	r0, [pc, #128]	@ (8000648 <MX_GPIO_Init+0x144>)
 80005c8:	f000 fc8e 	bl	8000ee8 <HAL_GPIO_Init>
 80005cc:	f24f 0306 	movw	r3, #61446	@ 0xf006
 80005d0:	617b      	str	r3, [r7, #20]
 80005d2:	2301      	movs	r3, #1
 80005d4:	61bb      	str	r3, [r7, #24]
 80005d6:	2300      	movs	r3, #0
 80005d8:	61fb      	str	r3, [r7, #28]
 80005da:	2300      	movs	r3, #0
 80005dc:	623b      	str	r3, [r7, #32]
 80005de:	f107 0314 	add.w	r3, r7, #20
 80005e2:	4619      	mov	r1, r3
 80005e4:	4819      	ldr	r0, [pc, #100]	@ (800064c <MX_GPIO_Init+0x148>)
 80005e6:	f000 fc7f 	bl	8000ee8 <HAL_GPIO_Init>
 80005ea:	f44f 6380 	mov.w	r3, #1024	@ 0x400
 80005ee:	617b      	str	r3, [r7, #20]
 80005f0:	2300      	movs	r3, #0
 80005f2:	61bb      	str	r3, [r7, #24]
 80005f4:	2300      	movs	r3, #0
 80005f6:	61fb      	str	r3, [r7, #28]
 80005f8:	f107 0314 	add.w	r3, r7, #20
 80005fc:	4619      	mov	r1, r3
 80005fe:	4814      	ldr	r0, [pc, #80]	@ (8000650 <MX_GPIO_Init+0x14c>)
 8000600:	f000 fc72 	bl	8000ee8 <HAL_GPIO_Init>
 8000604:	f44f 53c0 	mov.w	r3, #6144	@ 0x1800
 8000608:	617b      	str	r3, [r7, #20]
 800060a:	2301      	movs	r3, #1
 800060c:	61bb      	str	r3, [r7, #24]
 800060e:	2300      	movs	r3, #0
 8000610:	61fb      	str	r3, [r7, #28]
 8000612:	2300      	movs	r3, #0
 8000614:	623b      	str	r3, [r7, #32]
 8000616:	f107 0314 	add.w	r3, r7, #20
 800061a:	4619      	mov	r1, r3
 800061c:	480c      	ldr	r0, [pc, #48]	@ (8000650 <MX_GPIO_Init+0x14c>)
 800061e:	f000 fc63 	bl	8000ee8 <HAL_GPIO_Init>
 8000622:	2328      	movs	r3, #40	@ 0x28
 8000624:	617b      	str	r3, [r7, #20]
 8000626:	2300      	movs	r3, #0
 8000628:	61bb      	str	r3, [r7, #24]
 800062a:	2300      	movs	r3, #0
 800062c:	61fb      	str	r3, [r7, #28]
 800062e:	f107 0314 	add.w	r3, r7, #20
 8000632:	4619      	mov	r1, r3
 8000634:	4805      	ldr	r0, [pc, #20]	@ (800064c <MX_GPIO_Init+0x148>)
 8000636:	f000 fc57 	bl	8000ee8 <HAL_GPIO_Init>
 800063a:	bf00      	nop
 800063c:	3728      	adds	r7, #40	@ 0x28
 800063e:	46bd      	mov	sp, r7
 8000640:	bd80      	pop	{r7, pc}
 8000642:	bf00      	nop
 8000644:	40023800 	.word	0x40023800
 8000648:	40020800 	.word	0x40020800
 800064c:	40020400 	.word	0x40020400
 8000650:	40020000 	.word	0x40020000

08000654 <main>:
 8000654:	b580      	push	{r7, lr}
 8000656:	af00      	add	r7, sp, #0
 8000658:	f000 fac2 	bl	8000be0 <HAL_Init>
 800065c:	f000 f808 	bl	8000670 <SystemClock_Config>
 8000660:	f7ff ff50 	bl	8000504 <MX_GPIO_Init>
 8000664:	f000 f8e6 	bl	8000834 <MX_TIM2_Init>
 8000668:	f000 f98e 	bl	8000988 <ap_main>
 800066c:	e7fc      	b.n	8000668 <main+0x14>
	...

08000670 <SystemClock_Config>:
 8000670:	b580      	push	{r7, lr}
 8000672:	b094      	sub	sp, #80	@ 0x50
 8000674:	af00      	add	r7, sp, #0
 8000676:	f107 0320 	add.w	r3, r7, #32
 800067a:	2230      	movs	r2, #48	@ 0x30
 800067c:	2100      	movs	r1, #0
 800067e:	4618      	mov	r0, r3
 8000680:	f001 fe68 	bl	8002354 <memset>
 8000684:	f107 030c 	add.w	r3, r7, #12
 8000688:	2200      	movs	r2, #0
 800068a:	601a      	str	r2, [r3, #0]
 800068c:	605a      	str	r2, [r3, #4]
 800068e:	609a      	str	r2, [r3, #8]
 8000690:	60da      	str	r2, [r3, #12]
 8000692:	611a      	str	r2, [r3, #16]
 8000694:	2300      	movs	r3, #0
 8000696:	60bb      	str	r3, [r7, #8]
 8000698:	4b27      	ldr	r3, [pc, #156]	@ (8000738 <SystemClock_Config+0xc8>)
 800069a:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 800069c:	4a26      	ldr	r2, [pc, #152]	@ (8000738 <SystemClock_Config+0xc8>)
 800069e:	f043 5380 	orr.w	r3, r3, #268435456	@ 0x10000000
 80006a2:	6413      	str	r3, [r2, #64]	@ 0x40
 80006a4:	4b24      	ldr	r3, [pc, #144]	@ (8000738 <SystemClock_Config+0xc8>)
 80006a6:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80006a8:	f003 5380 	and.w	r3, r3, #268435456	@ 0x10000000
 80006ac:	60bb      	str	r3, [r7, #8]
 80006ae:	68bb      	ldr	r3, [r7, #8]
 80006b0:	2300      	movs	r3, #0
 80006b2:	607b      	str	r3, [r7, #4]
 80006b4:	4b21      	ldr	r3, [pc, #132]	@ (800073c <SystemClock_Config+0xcc>)
 80006b6:	681b      	ldr	r3, [r3, #0]
 80006b8:	4a20      	ldr	r2, [pc, #128]	@ (800073c <SystemClock_Config+0xcc>)
 80006ba:	f443 4340 	orr.w	r3, r3, #49152	@ 0xc000
 80006be:	6013      	str	r3, [r2, #0]
 80006c0:	4b1e      	ldr	r3, [pc, #120]	@ (800073c <SystemClock_Config+0xcc>)
 80006c2:	681b      	ldr	r3, [r3, #0]
 80006c4:	f403 4340 	and.w	r3, r3, #49152	@ 0xc000
 80006c8:	607b      	str	r3, [r7, #4]
 80006ca:	687b      	ldr	r3, [r7, #4]
 80006cc:	2301      	movs	r3, #1
 80006ce:	623b      	str	r3, [r7, #32]
 80006d0:	f44f 3380 	mov.w	r3, #65536	@ 0x10000
 80006d4:	627b      	str	r3, [r7, #36]	@ 0x24
 80006d6:	2302      	movs	r3, #2
 80006d8:	63bb      	str	r3, [r7, #56]	@ 0x38
 80006da:	f44f 0380 	mov.w	r3, #4194304	@ 0x400000
 80006de:	63fb      	str	r3, [r7, #60]	@ 0x3c
 80006e0:	2304      	movs	r3, #4
 80006e2:	643b      	str	r3, [r7, #64]	@ 0x40
 80006e4:	2364      	movs	r3, #100	@ 0x64
 80006e6:	647b      	str	r3, [r7, #68]	@ 0x44
 80006e8:	2302      	movs	r3, #2
 80006ea:	64bb      	str	r3, [r7, #72]	@ 0x48
 80006ec:	2304      	movs	r3, #4
 80006ee:	64fb      	str	r3, [r7, #76]	@ 0x4c
 80006f0:	f107 0320 	add.w	r3, r7, #32
 80006f4:	4618      	mov	r0, r3
 80006f6:	f000 fd95 	bl	8001224 <HAL_RCC_OscConfig>
 80006fa:	4603      	mov	r3, r0
 80006fc:	2b00      	cmp	r3, #0
 80006fe:	d001      	beq.n	8000704 <SystemClock_Config+0x94>
 8000700:	f000 f81e 	bl	8000740 <Error_Handler>
 8000704:	230f      	movs	r3, #15
 8000706:	60fb      	str	r3, [r7, #12]
 8000708:	2302      	movs	r3, #2
 800070a:	613b      	str	r3, [r7, #16]
 800070c:	2300      	movs	r3, #0
 800070e:	617b      	str	r3, [r7, #20]
 8000710:	f44f 5380 	mov.w	r3, #4096	@ 0x1000
 8000714:	61bb      	str	r3, [r7, #24]
 8000716:	2300      	movs	r3, #0
 8000718:	61fb      	str	r3, [r7, #28]
 800071a:	f107 030c 	add.w	r3, r7, #12
 800071e:	2103      	movs	r1, #3
 8000720:	4618      	mov	r0, r3
 8000722:	f000 fff7 	bl	8001714 <HAL_RCC_ClockConfig>
 8000726:	4603      	mov	r3, r0
 8000728:	2b00      	cmp	r3, #0
 800072a:	d001      	beq.n	8000730 <SystemClock_Config+0xc0>
 800072c:	f000 f808 	bl	8000740 <Error_Handler>
 8000730:	bf00      	nop
 8000732:	3750      	adds	r7, #80	@ 0x50
 8000734:	46bd      	mov	sp, r7
 8000736:	bd80      	pop	{r7, pc}
 8000738:	40023800 	.word	0x40023800
 800073c:	40007000 	.word	0x40007000

08000740 <Error_Handler>:
 8000740:	b480      	push	{r7}
 8000742:	af00      	add	r7, sp, #0
 8000744:	b672      	cpsid	i
 8000746:	bf00      	nop
 8000748:	bf00      	nop
 800074a:	e7fd      	b.n	8000748 <Error_Handler+0x8>

0800074c <HAL_MspInit>:
 800074c:	b480      	push	{r7}
 800074e:	b083      	sub	sp, #12
 8000750:	af00      	add	r7, sp, #0
 8000752:	2300      	movs	r3, #0
 8000754:	607b      	str	r3, [r7, #4]
 8000756:	4b10      	ldr	r3, [pc, #64]	@ (8000798 <HAL_MspInit+0x4c>)
 8000758:	6c5b      	ldr	r3, [r3, #68]	@ 0x44
 800075a:	4a0f      	ldr	r2, [pc, #60]	@ (8000798 <HAL_MspInit+0x4c>)
 800075c:	f443 4380 	orr.w	r3, r3, #16384	@ 0x4000
 8000760:	6453      	str	r3, [r2, #68]	@ 0x44
 8000762:	4b0d      	ldr	r3, [pc, #52]	@ (8000798 <HAL_MspInit+0x4c>)
 8000764:	6c5b      	ldr	r3, [r3, #68]	@ 0x44
 8000766:	f403 4380 	and.w	r3, r3, #16384	@ 0x4000
 800076a:	607b      	str	r3, [r7, #4]
 800076c:	687b      	ldr	r3, [r7, #4]
 800076e:	2300      	movs	r3, #0
 8000770:	603b      	str	r3, [r7, #0]
 8000772:	4b09      	ldr	r3, [pc, #36]	@ (8000798 <HAL_MspInit+0x4c>)
 8000774:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 8000776:	4a08      	ldr	r2, [pc, #32]	@ (8000798 <HAL_MspInit+0x4c>)
 8000778:	f043 5380 	orr.w	r3, r3, #268435456	@ 0x10000000
 800077c:	6413      	str	r3, [r2, #64]	@ 0x40
 800077e:	4b06      	ldr	r3, [pc, #24]	@ (8000798 <HAL_MspInit+0x4c>)
 8000780:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 8000782:	f003 5380 	and.w	r3, r3, #268435456	@ 0x10000000
 8000786:	603b      	str	r3, [r7, #0]
 8000788:	683b      	ldr	r3, [r7, #0]
 800078a:	bf00      	nop
 800078c:	370c      	adds	r7, #12
 800078e:	46bd      	mov	sp, r7
 8000790:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000794:	4770      	bx	lr
 8000796:	bf00      	nop
 8000798:	40023800 	.word	0x40023800

0800079c <NMI_Handler>:
 800079c:	b480      	push	{r7}
 800079e:	af00      	add	r7, sp, #0
 80007a0:	bf00      	nop
 80007a2:	e7fd      	b.n	80007a0 <NMI_Handler+0x4>

080007a4 <HardFault_Handler>:
 80007a4:	b480      	push	{r7}
 80007a6:	af00      	add	r7, sp, #0
 80007a8:	bf00      	nop
 80007aa:	e7fd      	b.n	80007a8 <HardFault_Handler+0x4>

080007ac <MemManage_Handler>:
 80007ac:	b480      	push	{r7}
 80007ae:	af00      	add	r7, sp, #0
 80007b0:	bf00      	nop
 80007b2:	e7fd      	b.n	80007b0 <MemManage_Handler+0x4>

080007b4 <BusFault_Handler>:
 80007b4:	b480      	push	{r7}
 80007b6:	af00      	add	r7, sp, #0
 80007b8:	bf00      	nop
 80007ba:	e7fd      	b.n	80007b8 <BusFault_Handler+0x4>

080007bc <UsageFault_Handler>:
 80007bc:	b480      	push	{r7}
 80007be:	af00      	add	r7, sp, #0
 80007c0:	bf00      	nop
 80007c2:	e7fd      	b.n	80007c0 <UsageFault_Handler+0x4>

080007c4 <SVC_Handler>:
 80007c4:	b480      	push	{r7}
 80007c6:	af00      	add	r7, sp, #0
 80007c8:	bf00      	nop
 80007ca:	46bd      	mov	sp, r7
 80007cc:	f85d 7b04 	ldr.w	r7, [sp], #4
 80007d0:	4770      	bx	lr

080007d2 <DebugMon_Handler>:
 80007d2:	b480      	push	{r7}
 80007d4:	af00      	add	r7, sp, #0
 80007d6:	bf00      	nop
 80007d8:	46bd      	mov	sp, r7
 80007da:	f85d 7b04 	ldr.w	r7, [sp], #4
 80007de:	4770      	bx	lr

080007e0 <PendSV_Handler>:
 80007e0:	b480      	push	{r7}
 80007e2:	af00      	add	r7, sp, #0
 80007e4:	bf00      	nop
 80007e6:	46bd      	mov	sp, r7
 80007e8:	f85d 7b04 	ldr.w	r7, [sp], #4
 80007ec:	4770      	bx	lr

080007ee <SysTick_Handler>:
 80007ee:	b580      	push	{r7, lr}
 80007f0:	af00      	add	r7, sp, #0
 80007f2:	f000 fa47 	bl	8000c84 <HAL_IncTick>
 80007f6:	bf00      	nop
 80007f8:	bd80      	pop	{r7, pc}
	...

080007fc <TIM2_IRQHandler>:
 80007fc:	b580      	push	{r7, lr}
 80007fe:	af00      	add	r7, sp, #0
 8000800:	4802      	ldr	r0, [pc, #8]	@ (800080c <TIM2_IRQHandler+0x10>)
 8000802:	f001 fa25 	bl	8001c50 <HAL_TIM_IRQHandler>
 8000806:	bf00      	nop
 8000808:	bd80      	pop	{r7, pc}
 800080a:	bf00      	nop
 800080c:	20000088 	.word	0x20000088

08000810 <SystemInit>:
 8000810:	b480      	push	{r7}
 8000812:	af00      	add	r7, sp, #0
 8000814:	4b06      	ldr	r3, [pc, #24]	@ (8000830 <SystemInit+0x20>)
 8000816:	f8d3 3088 	ldr.w	r3, [r3, #136]	@ 0x88
 800081a:	4a05      	ldr	r2, [pc, #20]	@ (8000830 <SystemInit+0x20>)
 800081c:	f443 0370 	orr.w	r3, r3, #15728640	@ 0xf00000
 8000820:	f8c2 3088 	str.w	r3, [r2, #136]	@ 0x88
 8000824:	bf00      	nop
 8000826:	46bd      	mov	sp, r7
 8000828:	f85d 7b04 	ldr.w	r7, [sp], #4
 800082c:	4770      	bx	lr
 800082e:	bf00      	nop
 8000830:	e000ed00 	.word	0xe000ed00

08000834 <MX_TIM2_Init>:
 8000834:	b580      	push	{r7, lr}
 8000836:	b086      	sub	sp, #24
 8000838:	af00      	add	r7, sp, #0
 800083a:	f107 0308 	add.w	r3, r7, #8
 800083e:	2200      	movs	r2, #0
 8000840:	601a      	str	r2, [r3, #0]
 8000842:	605a      	str	r2, [r3, #4]
 8000844:	609a      	str	r2, [r3, #8]
 8000846:	60da      	str	r2, [r3, #12]
 8000848:	463b      	mov	r3, r7
 800084a:	2200      	movs	r2, #0
 800084c:	601a      	str	r2, [r3, #0]
 800084e:	605a      	str	r2, [r3, #4]
 8000850:	4b1d      	ldr	r3, [pc, #116]	@ (80008c8 <MX_TIM2_Init+0x94>)
 8000852:	f04f 4280 	mov.w	r2, #1073741824	@ 0x40000000
 8000856:	601a      	str	r2, [r3, #0]
 8000858:	4b1b      	ldr	r3, [pc, #108]	@ (80008c8 <MX_TIM2_Init+0x94>)
 800085a:	220f      	movs	r2, #15
 800085c:	605a      	str	r2, [r3, #4]
 800085e:	4b1a      	ldr	r3, [pc, #104]	@ (80008c8 <MX_TIM2_Init+0x94>)
 8000860:	2200      	movs	r2, #0
 8000862:	609a      	str	r2, [r3, #8]
 8000864:	4b18      	ldr	r3, [pc, #96]	@ (80008c8 <MX_TIM2_Init+0x94>)
 8000866:	f240 32e7 	movw	r2, #999	@ 0x3e7
 800086a:	60da      	str	r2, [r3, #12]
 800086c:	4b16      	ldr	r3, [pc, #88]	@ (80008c8 <MX_TIM2_Init+0x94>)
 800086e:	2200      	movs	r2, #0
 8000870:	611a      	str	r2, [r3, #16]
 8000872:	4b15      	ldr	r3, [pc, #84]	@ (80008c8 <MX_TIM2_Init+0x94>)
 8000874:	2200      	movs	r2, #0
 8000876:	619a      	str	r2, [r3, #24]
 8000878:	4813      	ldr	r0, [pc, #76]	@ (80008c8 <MX_TIM2_Init+0x94>)
 800087a:	f001 f937 	bl	8001aec <HAL_TIM_Base_Init>
 800087e:	4603      	mov	r3, r0
 8000880:	2b00      	cmp	r3, #0
 8000882:	d001      	beq.n	8000888 <MX_TIM2_Init+0x54>
 8000884:	f7ff ff5c 	bl	8000740 <Error_Handler>
 8000888:	f44f 5380 	mov.w	r3, #4096	@ 0x1000
 800088c:	60bb      	str	r3, [r7, #8]
 800088e:	f107 0308 	add.w	r3, r7, #8
 8000892:	4619      	mov	r1, r3
 8000894:	480c      	ldr	r0, [pc, #48]	@ (80008c8 <MX_TIM2_Init+0x94>)
 8000896:	f001 facb 	bl	8001e30 <HAL_TIM_ConfigClockSource>
 800089a:	4603      	mov	r3, r0
 800089c:	2b00      	cmp	r3, #0
 800089e:	d001      	beq.n	80008a4 <MX_TIM2_Init+0x70>
 80008a0:	f7ff ff4e 	bl	8000740 <Error_Handler>
 80008a4:	2300      	movs	r3, #0
 80008a6:	603b      	str	r3, [r7, #0]
 80008a8:	2300      	movs	r3, #0
 80008aa:	607b      	str	r3, [r7, #4]
 80008ac:	463b      	mov	r3, r7
 80008ae:	4619      	mov	r1, r3
 80008b0:	4805      	ldr	r0, [pc, #20]	@ (80008c8 <MX_TIM2_Init+0x94>)
 80008b2:	f001 fccd 	bl	8002250 <HAL_TIMEx_MasterConfigSynchronization>
 80008b6:	4603      	mov	r3, r0
 80008b8:	2b00      	cmp	r3, #0
 80008ba:	d001      	beq.n	80008c0 <MX_TIM2_Init+0x8c>
 80008bc:	f7ff ff40 	bl	8000740 <Error_Handler>
 80008c0:	bf00      	nop
 80008c2:	3718      	adds	r7, #24
 80008c4:	46bd      	mov	sp, r7
 80008c6:	bd80      	pop	{r7, pc}
 80008c8:	20000088 	.word	0x20000088

080008cc <HAL_TIM_Base_MspInit>:
 80008cc:	b580      	push	{r7, lr}
 80008ce:	b084      	sub	sp, #16
 80008d0:	af00      	add	r7, sp, #0
 80008d2:	6078      	str	r0, [r7, #4]
 80008d4:	687b      	ldr	r3, [r7, #4]
 80008d6:	681b      	ldr	r3, [r3, #0]
 80008d8:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 80008dc:	d115      	bne.n	800090a <HAL_TIM_Base_MspInit+0x3e>
 80008de:	2300      	movs	r3, #0
 80008e0:	60fb      	str	r3, [r7, #12]
 80008e2:	4b0c      	ldr	r3, [pc, #48]	@ (8000914 <HAL_TIM_Base_MspInit+0x48>)
 80008e4:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80008e6:	4a0b      	ldr	r2, [pc, #44]	@ (8000914 <HAL_TIM_Base_MspInit+0x48>)
 80008e8:	f043 0301 	orr.w	r3, r3, #1
 80008ec:	6413      	str	r3, [r2, #64]	@ 0x40
 80008ee:	4b09      	ldr	r3, [pc, #36]	@ (8000914 <HAL_TIM_Base_MspInit+0x48>)
 80008f0:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80008f2:	f003 0301 	and.w	r3, r3, #1
 80008f6:	60fb      	str	r3, [r7, #12]
 80008f8:	68fb      	ldr	r3, [r7, #12]
 80008fa:	2200      	movs	r2, #0
 80008fc:	2100      	movs	r1, #0
 80008fe:	201c      	movs	r0, #28
 8000900:	f000 fabb 	bl	8000e7a <HAL_NVIC_SetPriority>
 8000904:	201c      	movs	r0, #28
 8000906:	f000 fad4 	bl	8000eb2 <HAL_NVIC_EnableIRQ>
 800090a:	bf00      	nop
 800090c:	3710      	adds	r7, #16
 800090e:	46bd      	mov	sp, r7
 8000910:	bd80      	pop	{r7, pc}
 8000912:	bf00      	nop
 8000914:	40023800 	.word	0x40023800

08000918 <Reset_Handler>:
 8000918:	f8df d034 	ldr.w	sp, [pc, #52]	@ 8000950 <LoopFillZerobss+0xe>
 800091c:	f7ff ff78 	bl	8000810 <SystemInit>
 8000920:	480c      	ldr	r0, [pc, #48]	@ (8000954 <LoopFillZerobss+0x12>)
 8000922:	490d      	ldr	r1, [pc, #52]	@ (8000958 <LoopFillZerobss+0x16>)
 8000924:	4a0d      	ldr	r2, [pc, #52]	@ (800095c <LoopFillZerobss+0x1a>)
 8000926:	2300      	movs	r3, #0
 8000928:	e002      	b.n	8000930 <LoopCopyDataInit>

0800092a <CopyDataInit>:
 800092a:	58d4      	ldr	r4, [r2, r3]
 800092c:	50c4      	str	r4, [r0, r3]
 800092e:	3304      	adds	r3, #4

08000930 <LoopCopyDataInit>:
 8000930:	18c4      	adds	r4, r0, r3
 8000932:	428c      	cmp	r4, r1
 8000934:	d3f9      	bcc.n	800092a <CopyDataInit>
 8000936:	4a0a      	ldr	r2, [pc, #40]	@ (8000960 <LoopFillZerobss+0x1e>)
 8000938:	4c0a      	ldr	r4, [pc, #40]	@ (8000964 <LoopFillZerobss+0x22>)
 800093a:	2300      	movs	r3, #0
 800093c:	e001      	b.n	8000942 <LoopFillZerobss>

0800093e <FillZerobss>:
 800093e:	6013      	str	r3, [r2, #0]
 8000940:	3204      	adds	r2, #4

08000942 <LoopFillZerobss>:
 8000942:	42a2      	cmp	r2, r4
 8000944:	d3fb      	bcc.n	800093e <FillZerobss>
 8000946:	f001 fd0d 	bl	8002364 <__libc_init_array>
 800094a:	f7ff fe83 	bl	8000654 <main>
 800094e:	4770      	bx	lr
 8000950:	20020000 	.word	0x20020000
 8000954:	20000000 	.word	0x20000000
 8000958:	2000006c 	.word	0x2000006c
 800095c:	080023f0 	.word	0x080023f0
 8000960:	2000006c 	.word	0x2000006c
 8000964:	200000dc 	.word	0x200000dc

08000968 <ADC_IRQHandler>:
 8000968:	e7fe      	b.n	8000968 <ADC_IRQHandler>

0800096a <HAL_TIM_PeriodElapsedCallback>:
 800096a:	b580      	push	{r7, lr}
 800096c:	b082      	sub	sp, #8
 800096e:	af00      	add	r7, sp, #0
 8000970:	6078      	str	r0, [r7, #4]
 8000972:	687b      	ldr	r3, [r7, #4]
 8000974:	681b      	ldr	r3, [r3, #0]
 8000976:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 800097a:	d101      	bne.n	8000980 <HAL_TIM_PeriodElapsedCallback+0x16>
 800097c:	f000 f822 	bl	80009c4 <FND_DispData>
 8000980:	bf00      	nop
 8000982:	3708      	adds	r7, #8
 8000984:	46bd      	mov	sp, r7
 8000986:	bd80      	pop	{r7, pc}

08000988 <ap_main>:
 8000988:	b580      	push	{r7, lr}
 800098a:	af00      	add	r7, sp, #0
 800098c:	f240 40d2 	movw	r0, #1234	@ 0x4d2
 8000990:	f000 f808 	bl	80009a4 <FND_WriteData>
 8000994:	4802      	ldr	r0, [pc, #8]	@ (80009a0 <ap_main+0x18>)
 8000996:	f001 f8f9 	bl	8001b8c <HAL_TIM_Base_Start_IT>
 800099a:	bf00      	nop
 800099c:	e7fd      	b.n	800099a <ap_main+0x12>
 800099e:	bf00      	nop
 80009a0:	20000088 	.word	0x20000088

080009a4 <FND_WriteData>:
 80009a4:	b480      	push	{r7}
 80009a6:	b083      	sub	sp, #12
 80009a8:	af00      	add	r7, sp, #0
 80009aa:	4603      	mov	r3, r0
 80009ac:	80fb      	strh	r3, [r7, #6]
 80009ae:	4a04      	ldr	r2, [pc, #16]	@ (80009c0 <FND_WriteData+0x1c>)
 80009b0:	88fb      	ldrh	r3, [r7, #6]
 80009b2:	8013      	strh	r3, [r2, #0]
 80009b4:	bf00      	nop
 80009b6:	370c      	adds	r7, #12
 80009b8:	46bd      	mov	sp, r7
 80009ba:	f85d 7b04 	ldr.w	r7, [sp], #4
 80009be:	4770      	bx	lr
 80009c0:	200000d0 	.word	0x200000d0

080009c4 <FND_DispData>:
 80009c4:	b580      	push	{r7, lr}
 80009c6:	af00      	add	r7, sp, #0
 80009c8:	4b3f      	ldr	r3, [pc, #252]	@ (8000ac8 <FND_DispData+0x104>)
 80009ca:	681b      	ldr	r3, [r3, #0]
 80009cc:	3301      	adds	r3, #1
 80009ce:	425a      	negs	r2, r3
 80009d0:	f003 0303 	and.w	r3, r3, #3
 80009d4:	f002 0203 	and.w	r2, r2, #3
 80009d8:	bf58      	it	pl
 80009da:	4253      	negpl	r3, r2
 80009dc:	4a3a      	ldr	r2, [pc, #232]	@ (8000ac8 <FND_DispData+0x104>)
 80009de:	6013      	str	r3, [r2, #0]
 80009e0:	4b39      	ldr	r3, [pc, #228]	@ (8000ac8 <FND_DispData+0x104>)
 80009e2:	681b      	ldr	r3, [r3, #0]
 80009e4:	2b03      	cmp	r3, #3
 80009e6:	d86c      	bhi.n	8000ac2 <FND_DispData+0xfe>
 80009e8:	a201      	add	r2, pc, #4	@ (adr r2, 80009f0 <FND_DispData+0x2c>)
 80009ea:	f852 f023 	ldr.w	pc, [r2, r3, lsl #2]
 80009ee:	bf00      	nop
 80009f0:	08000a01 	.word	0x08000a01
 80009f4:	08000a2f 	.word	0x08000a2f
 80009f8:	08000a67 	.word	0x08000a67
 80009fc:	08000a9f 	.word	0x08000a9f
 8000a00:	f000 f884 	bl	8000b0c <FND_DispOffAll>
 8000a04:	4b31      	ldr	r3, [pc, #196]	@ (8000acc <FND_DispData+0x108>)
 8000a06:	881a      	ldrh	r2, [r3, #0]
 8000a08:	4b31      	ldr	r3, [pc, #196]	@ (8000ad0 <FND_DispData+0x10c>)
 8000a0a:	fba3 1302 	umull	r1, r3, r3, r2
 8000a0e:	08d9      	lsrs	r1, r3, #3
 8000a10:	460b      	mov	r3, r1
 8000a12:	009b      	lsls	r3, r3, #2
 8000a14:	440b      	add	r3, r1
 8000a16:	005b      	lsls	r3, r3, #1
 8000a18:	1ad3      	subs	r3, r2, r3
 8000a1a:	b29b      	uxth	r3, r3
 8000a1c:	4618      	mov	r0, r3
 8000a1e:	f000 f897 	bl	8000b50 <FND_DispDigit>
 8000a22:	4b29      	ldr	r3, [pc, #164]	@ (8000ac8 <FND_DispData+0x104>)
 8000a24:	681b      	ldr	r3, [r3, #0]
 8000a26:	4618      	mov	r0, r3
 8000a28:	f000 f858 	bl	8000adc <FND_DispOn>
 8000a2c:	e049      	b.n	8000ac2 <FND_DispData+0xfe>
 8000a2e:	f000 f86d 	bl	8000b0c <FND_DispOffAll>
 8000a32:	4b26      	ldr	r3, [pc, #152]	@ (8000acc <FND_DispData+0x108>)
 8000a34:	881b      	ldrh	r3, [r3, #0]
 8000a36:	4a26      	ldr	r2, [pc, #152]	@ (8000ad0 <FND_DispData+0x10c>)
 8000a38:	fba2 2303 	umull	r2, r3, r2, r3
 8000a3c:	08db      	lsrs	r3, r3, #3
 8000a3e:	b29a      	uxth	r2, r3
 8000a40:	4b23      	ldr	r3, [pc, #140]	@ (8000ad0 <FND_DispData+0x10c>)
 8000a42:	fba3 1302 	umull	r1, r3, r3, r2
 8000a46:	08d9      	lsrs	r1, r3, #3
 8000a48:	460b      	mov	r3, r1
 8000a4a:	009b      	lsls	r3, r3, #2
 8000a4c:	440b      	add	r3, r1
 8000a4e:	005b      	lsls	r3, r3, #1
 8000a50:	1ad3      	subs	r3, r2, r3
 8000a52:	b29b      	uxth	r3, r3
 8000a54:	4618      	mov	r0, r3
 8000a56:	f000 f87b 	bl	8000b50 <FND_DispDigit>
 8000a5a:	4b1b      	ldr	r3, [pc, #108]	@ (8000ac8 <FND_DispData+0x104>)
 8000a5c:	681b      	ldr	r3, [r3, #0]
 8000a5e:	4618      	mov	r0, r3
 8000a60:	f000 f83c 	bl	8000adc <FND_DispOn>
 8000a64:	e02d      	b.n	8000ac2 <FND_DispData+0xfe>
 8000a66:	f000 f851 	bl	8000b0c <FND_DispOffAll>
 8000a6a:	4b18      	ldr	r3, [pc, #96]	@ (8000acc <FND_DispData+0x108>)
 8000a6c:	881b      	ldrh	r3, [r3, #0]
 8000a6e:	4a19      	ldr	r2, [pc, #100]	@ (8000ad4 <FND_DispData+0x110>)
 8000a70:	fba2 2303 	umull	r2, r3, r2, r3
 8000a74:	095b      	lsrs	r3, r3, #5
 8000a76:	b29a      	uxth	r2, r3
 8000a78:	4b15      	ldr	r3, [pc, #84]	@ (8000ad0 <FND_DispData+0x10c>)
 8000a7a:	fba3 1302 	umull	r1, r3, r3, r2
 8000a7e:	08d9      	lsrs	r1, r3, #3
 8000a80:	460b      	mov	r3, r1
 8000a82:	009b      	lsls	r3, r3, #2
 8000a84:	440b      	add	r3, r1
 8000a86:	005b      	lsls	r3, r3, #1
 8000a88:	1ad3      	subs	r3, r2, r3
 8000a8a:	b29b      	uxth	r3, r3
 8000a8c:	4618      	mov	r0, r3
 8000a8e:	f000 f85f 	bl	8000b50 <FND_DispDigit>
 8000a92:	4b0d      	ldr	r3, [pc, #52]	@ (8000ac8 <FND_DispData+0x104>)
 8000a94:	681b      	ldr	r3, [r3, #0]
 8000a96:	4618      	mov	r0, r3
 8000a98:	f000 f820 	bl	8000adc <FND_DispOn>
 8000a9c:	e011      	b.n	8000ac2 <FND_DispData+0xfe>
 8000a9e:	f000 f835 	bl	8000b0c <FND_DispOffAll>
 8000aa2:	4b0a      	ldr	r3, [pc, #40]	@ (8000acc <FND_DispData+0x108>)
 8000aa4:	881b      	ldrh	r3, [r3, #0]
 8000aa6:	4a0c      	ldr	r2, [pc, #48]	@ (8000ad8 <FND_DispData+0x114>)
 8000aa8:	fba2 2303 	umull	r2, r3, r2, r3
 8000aac:	099b      	lsrs	r3, r3, #6
 8000aae:	b29b      	uxth	r3, r3
 8000ab0:	4618      	mov	r0, r3
 8000ab2:	f000 f84d 	bl	8000b50 <FND_DispDigit>
 8000ab6:	4b04      	ldr	r3, [pc, #16]	@ (8000ac8 <FND_DispData+0x104>)
 8000ab8:	681b      	ldr	r3, [r3, #0]
 8000aba:	4618      	mov	r0, r3
 8000abc:	f000 f80e 	bl	8000adc <FND_DispOn>
 8000ac0:	bf00      	nop
 8000ac2:	bf00      	nop
 8000ac4:	bd80      	pop	{r7, pc}
 8000ac6:	bf00      	nop
 8000ac8:	200000d4 	.word	0x200000d4
 8000acc:	200000d0 	.word	0x200000d0
 8000ad0:	cccccccd 	.word	0xcccccccd
 8000ad4:	51eb851f 	.word	0x51eb851f
 8000ad8:	10624dd3 	.word	0x10624dd3

08000adc <FND_DispOn>:
 8000adc:	b580      	push	{r7, lr}
 8000ade:	b082      	sub	sp, #8
 8000ae0:	af00      	add	r7, sp, #0
 8000ae2:	6078      	str	r0, [r7, #4]
 8000ae4:	4a08      	ldr	r2, [pc, #32]	@ (8000b08 <FND_DispOn+0x2c>)
 8000ae6:	687b      	ldr	r3, [r7, #4]
 8000ae8:	f852 0033 	ldr.w	r0, [r2, r3, lsl #3]
 8000aec:	4a06      	ldr	r2, [pc, #24]	@ (8000b08 <FND_DispOn+0x2c>)
 8000aee:	687b      	ldr	r3, [r7, #4]
 8000af0:	00db      	lsls	r3, r3, #3
 8000af2:	4413      	add	r3, r2
 8000af4:	685b      	ldr	r3, [r3, #4]
 8000af6:	b29b      	uxth	r3, r3
 8000af8:	2200      	movs	r2, #0
 8000afa:	4619      	mov	r1, r3
 8000afc:	f000 fb78 	bl	80011f0 <HAL_GPIO_WritePin>
 8000b00:	bf00      	nop
 8000b02:	3708      	adds	r7, #8
 8000b04:	46bd      	mov	sp, r7
 8000b06:	bd80      	pop	{r7, pc}
 8000b08:	20000004 	.word	0x20000004

08000b0c <FND_DispOffAll>:
 8000b0c:	b580      	push	{r7, lr}
 8000b0e:	b082      	sub	sp, #8
 8000b10:	af00      	add	r7, sp, #0
 8000b12:	2300      	movs	r3, #0
 8000b14:	607b      	str	r3, [r7, #4]
 8000b16:	e010      	b.n	8000b3a <FND_DispOffAll+0x2e>
 8000b18:	4a0c      	ldr	r2, [pc, #48]	@ (8000b4c <FND_DispOffAll+0x40>)
 8000b1a:	687b      	ldr	r3, [r7, #4]
 8000b1c:	f852 0033 	ldr.w	r0, [r2, r3, lsl #3]
 8000b20:	4a0a      	ldr	r2, [pc, #40]	@ (8000b4c <FND_DispOffAll+0x40>)
 8000b22:	687b      	ldr	r3, [r7, #4]
 8000b24:	00db      	lsls	r3, r3, #3
 8000b26:	4413      	add	r3, r2
 8000b28:	685b      	ldr	r3, [r3, #4]
 8000b2a:	b29b      	uxth	r3, r3
 8000b2c:	2201      	movs	r2, #1
 8000b2e:	4619      	mov	r1, r3
 8000b30:	f000 fb5e 	bl	80011f0 <HAL_GPIO_WritePin>
 8000b34:	687b      	ldr	r3, [r7, #4]
 8000b36:	3301      	adds	r3, #1
 8000b38:	607b      	str	r3, [r7, #4]
 8000b3a:	687b      	ldr	r3, [r7, #4]
 8000b3c:	2b03      	cmp	r3, #3
 8000b3e:	ddeb      	ble.n	8000b18 <FND_DispOffAll+0xc>
 8000b40:	bf00      	nop
 8000b42:	bf00      	nop
 8000b44:	3708      	adds	r7, #8
 8000b46:	46bd      	mov	sp, r7
 8000b48:	bd80      	pop	{r7, pc}
 8000b4a:	bf00      	nop
 8000b4c:	20000004 	.word	0x20000004

08000b50 <FND_DispDigit>:
 8000b50:	b580      	push	{r7, lr}
 8000b52:	b086      	sub	sp, #24
 8000b54:	af00      	add	r7, sp, #0
 8000b56:	4603      	mov	r3, r0
 8000b58:	80fb      	strh	r3, [r7, #6]
 8000b5a:	4a1f      	ldr	r2, [pc, #124]	@ (8000bd8 <FND_DispDigit+0x88>)
 8000b5c:	f107 0308 	add.w	r3, r7, #8
 8000b60:	ca07      	ldmia	r2, {r0, r1, r2}
 8000b62:	c303      	stmia	r3!, {r0, r1}
 8000b64:	801a      	strh	r2, [r3, #0]
 8000b66:	2300      	movs	r3, #0
 8000b68:	617b      	str	r3, [r7, #20]
 8000b6a:	e02c      	b.n	8000bc6 <FND_DispDigit+0x76>
 8000b6c:	88fb      	ldrh	r3, [r7, #6]
 8000b6e:	3318      	adds	r3, #24
 8000b70:	443b      	add	r3, r7
 8000b72:	f813 3c10 	ldrb.w	r3, [r3, #-16]
 8000b76:	461a      	mov	r2, r3
 8000b78:	697b      	ldr	r3, [r7, #20]
 8000b7a:	fa42 f303 	asr.w	r3, r2, r3
 8000b7e:	f003 0301 	and.w	r3, r3, #1
 8000b82:	2b00      	cmp	r3, #0
 8000b84:	d10e      	bne.n	8000ba4 <FND_DispDigit+0x54>
 8000b86:	4a15      	ldr	r2, [pc, #84]	@ (8000bdc <FND_DispDigit+0x8c>)
 8000b88:	697b      	ldr	r3, [r7, #20]
 8000b8a:	f852 0033 	ldr.w	r0, [r2, r3, lsl #3]
 8000b8e:	4a13      	ldr	r2, [pc, #76]	@ (8000bdc <FND_DispDigit+0x8c>)
 8000b90:	697b      	ldr	r3, [r7, #20]
 8000b92:	00db      	lsls	r3, r3, #3
 8000b94:	4413      	add	r3, r2
 8000b96:	685b      	ldr	r3, [r3, #4]
 8000b98:	b29b      	uxth	r3, r3
 8000b9a:	2200      	movs	r2, #0
 8000b9c:	4619      	mov	r1, r3
 8000b9e:	f000 fb27 	bl	80011f0 <HAL_GPIO_WritePin>
 8000ba2:	e00d      	b.n	8000bc0 <FND_DispDigit+0x70>
 8000ba4:	4a0d      	ldr	r2, [pc, #52]	@ (8000bdc <FND_DispDigit+0x8c>)
 8000ba6:	697b      	ldr	r3, [r7, #20]
 8000ba8:	f852 0033 	ldr.w	r0, [r2, r3, lsl #3]
 8000bac:	4a0b      	ldr	r2, [pc, #44]	@ (8000bdc <FND_DispDigit+0x8c>)
 8000bae:	697b      	ldr	r3, [r7, #20]
 8000bb0:	00db      	lsls	r3, r3, #3
 8000bb2:	4413      	add	r3, r2
 8000bb4:	685b      	ldr	r3, [r3, #4]
 8000bb6:	b29b      	uxth	r3, r3
 8000bb8:	2201      	movs	r2, #1
 8000bba:	4619      	mov	r1, r3
 8000bbc:	f000 fb18 	bl	80011f0 <HAL_GPIO_WritePin>
 8000bc0:	697b      	ldr	r3, [r7, #20]
 8000bc2:	3301      	adds	r3, #1
 8000bc4:	617b      	str	r3, [r7, #20]
 8000bc6:	697b      	ldr	r3, [r7, #20]
 8000bc8:	2b07      	cmp	r3, #7
 8000bca:	ddcf      	ble.n	8000b6c <FND_DispDigit+0x1c>
 8000bcc:	bf00      	nop
 8000bce:	bf00      	nop
 8000bd0:	3718      	adds	r7, #24
 8000bd2:	46bd      	mov	sp, r7
 8000bd4:	bd80      	pop	{r7, pc}
 8000bd6:	bf00      	nop
 8000bd8:	080023c4 	.word	0x080023c4
 8000bdc:	20000024 	.word	0x20000024

08000be0 <HAL_Init>:
 8000be0:	b580      	push	{r7, lr}
 8000be2:	af00      	add	r7, sp, #0
 8000be4:	4b0e      	ldr	r3, [pc, #56]	@ (8000c20 <HAL_Init+0x40>)
 8000be6:	681b      	ldr	r3, [r3, #0]
 8000be8:	4a0d      	ldr	r2, [pc, #52]	@ (8000c20 <HAL_Init+0x40>)
 8000bea:	f443 7300 	orr.w	r3, r3, #512	@ 0x200
 8000bee:	6013      	str	r3, [r2, #0]
 8000bf0:	4b0b      	ldr	r3, [pc, #44]	@ (8000c20 <HAL_Init+0x40>)
 8000bf2:	681b      	ldr	r3, [r3, #0]
 8000bf4:	4a0a      	ldr	r2, [pc, #40]	@ (8000c20 <HAL_Init+0x40>)
 8000bf6:	f443 6380 	orr.w	r3, r3, #1024	@ 0x400
 8000bfa:	6013      	str	r3, [r2, #0]
 8000bfc:	4b08      	ldr	r3, [pc, #32]	@ (8000c20 <HAL_Init+0x40>)
 8000bfe:	681b      	ldr	r3, [r3, #0]
 8000c00:	4a07      	ldr	r2, [pc, #28]	@ (8000c20 <HAL_Init+0x40>)
 8000c02:	f443 7380 	orr.w	r3, r3, #256	@ 0x100
 8000c06:	6013      	str	r3, [r2, #0]
 8000c08:	2003      	movs	r0, #3
 8000c0a:	f000 f92b 	bl	8000e64 <HAL_NVIC_SetPriorityGrouping>
 8000c0e:	200f      	movs	r0, #15
 8000c10:	f000 f808 	bl	8000c24 <HAL_InitTick>
 8000c14:	f7ff fd9a 	bl	800074c <HAL_MspInit>
 8000c18:	2300      	movs	r3, #0
 8000c1a:	4618      	mov	r0, r3
 8000c1c:	bd80      	pop	{r7, pc}
 8000c1e:	bf00      	nop
 8000c20:	40023c00 	.word	0x40023c00

08000c24 <HAL_InitTick>:
 8000c24:	b580      	push	{r7, lr}
 8000c26:	b082      	sub	sp, #8
 8000c28:	af00      	add	r7, sp, #0
 8000c2a:	6078      	str	r0, [r7, #4]
 8000c2c:	4b12      	ldr	r3, [pc, #72]	@ (8000c78 <HAL_InitTick+0x54>)
 8000c2e:	681a      	ldr	r2, [r3, #0]
 8000c30:	4b12      	ldr	r3, [pc, #72]	@ (8000c7c <HAL_InitTick+0x58>)
 8000c32:	781b      	ldrb	r3, [r3, #0]
 8000c34:	4619      	mov	r1, r3
 8000c36:	f44f 737a 	mov.w	r3, #1000	@ 0x3e8
 8000c3a:	fbb3 f3f1 	udiv	r3, r3, r1
 8000c3e:	fbb2 f3f3 	udiv	r3, r2, r3
 8000c42:	4618      	mov	r0, r3
 8000c44:	f000 f943 	bl	8000ece <HAL_SYSTICK_Config>
 8000c48:	4603      	mov	r3, r0
 8000c4a:	2b00      	cmp	r3, #0
 8000c4c:	d001      	beq.n	8000c52 <HAL_InitTick+0x2e>
 8000c4e:	2301      	movs	r3, #1
 8000c50:	e00e      	b.n	8000c70 <HAL_InitTick+0x4c>
 8000c52:	687b      	ldr	r3, [r7, #4]
 8000c54:	2b0f      	cmp	r3, #15
 8000c56:	d80a      	bhi.n	8000c6e <HAL_InitTick+0x4a>
 8000c58:	2200      	movs	r2, #0
 8000c5a:	6879      	ldr	r1, [r7, #4]
 8000c5c:	f04f 30ff 	mov.w	r0, #4294967295
 8000c60:	f000 f90b 	bl	8000e7a <HAL_NVIC_SetPriority>
 8000c64:	4a06      	ldr	r2, [pc, #24]	@ (8000c80 <HAL_InitTick+0x5c>)
 8000c66:	687b      	ldr	r3, [r7, #4]
 8000c68:	6013      	str	r3, [r2, #0]
 8000c6a:	2300      	movs	r3, #0
 8000c6c:	e000      	b.n	8000c70 <HAL_InitTick+0x4c>
 8000c6e:	2301      	movs	r3, #1
 8000c70:	4618      	mov	r0, r3
 8000c72:	3708      	adds	r7, #8
 8000c74:	46bd      	mov	sp, r7
 8000c76:	bd80      	pop	{r7, pc}
 8000c78:	20000000 	.word	0x20000000
 8000c7c:	20000068 	.word	0x20000068
 8000c80:	20000064 	.word	0x20000064

08000c84 <HAL_IncTick>:
 8000c84:	b480      	push	{r7}
 8000c86:	af00      	add	r7, sp, #0
 8000c88:	4b06      	ldr	r3, [pc, #24]	@ (8000ca4 <HAL_IncTick+0x20>)
 8000c8a:	781b      	ldrb	r3, [r3, #0]
 8000c8c:	461a      	mov	r2, r3
 8000c8e:	4b06      	ldr	r3, [pc, #24]	@ (8000ca8 <HAL_IncTick+0x24>)
 8000c90:	681b      	ldr	r3, [r3, #0]
 8000c92:	4413      	add	r3, r2
 8000c94:	4a04      	ldr	r2, [pc, #16]	@ (8000ca8 <HAL_IncTick+0x24>)
 8000c96:	6013      	str	r3, [r2, #0]
 8000c98:	bf00      	nop
 8000c9a:	46bd      	mov	sp, r7
 8000c9c:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000ca0:	4770      	bx	lr
 8000ca2:	bf00      	nop
 8000ca4:	20000068 	.word	0x20000068
 8000ca8:	200000d8 	.word	0x200000d8

08000cac <HAL_GetTick>:
 8000cac:	b480      	push	{r7}
 8000cae:	af00      	add	r7, sp, #0
 8000cb0:	4b03      	ldr	r3, [pc, #12]	@ (8000cc0 <HAL_GetTick+0x14>)
 8000cb2:	681b      	ldr	r3, [r3, #0]
 8000cb4:	4618      	mov	r0, r3
 8000cb6:	46bd      	mov	sp, r7
 8000cb8:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000cbc:	4770      	bx	lr
 8000cbe:	bf00      	nop
 8000cc0:	200000d8 	.word	0x200000d8

08000cc4 <__NVIC_SetPriorityGrouping>:
 8000cc4:	b480      	push	{r7}
 8000cc6:	b085      	sub	sp, #20
 8000cc8:	af00      	add	r7, sp, #0
 8000cca:	6078      	str	r0, [r7, #4]
 8000ccc:	687b      	ldr	r3, [r7, #4]
 8000cce:	f003 0307 	and.w	r3, r3, #7
 8000cd2:	60fb      	str	r3, [r7, #12]
 8000cd4:	4b0c      	ldr	r3, [pc, #48]	@ (8000d08 <__NVIC_SetPriorityGrouping+0x44>)
 8000cd6:	68db      	ldr	r3, [r3, #12]
 8000cd8:	60bb      	str	r3, [r7, #8]
 8000cda:	68ba      	ldr	r2, [r7, #8]
 8000cdc:	f64f 03ff 	movw	r3, #63743	@ 0xf8ff
 8000ce0:	4013      	ands	r3, r2
 8000ce2:	60bb      	str	r3, [r7, #8]
 8000ce4:	68fb      	ldr	r3, [r7, #12]
 8000ce6:	021a      	lsls	r2, r3, #8
 8000ce8:	68bb      	ldr	r3, [r7, #8]
 8000cea:	4313      	orrs	r3, r2
 8000cec:	f043 63bf 	orr.w	r3, r3, #100139008	@ 0x5f80000
 8000cf0:	f443 3300 	orr.w	r3, r3, #131072	@ 0x20000
 8000cf4:	60bb      	str	r3, [r7, #8]
 8000cf6:	4a04      	ldr	r2, [pc, #16]	@ (8000d08 <__NVIC_SetPriorityGrouping+0x44>)
 8000cf8:	68bb      	ldr	r3, [r7, #8]
 8000cfa:	60d3      	str	r3, [r2, #12]
 8000cfc:	bf00      	nop
 8000cfe:	3714      	adds	r7, #20
 8000d00:	46bd      	mov	sp, r7
 8000d02:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000d06:	4770      	bx	lr
 8000d08:	e000ed00 	.word	0xe000ed00

08000d0c <__NVIC_GetPriorityGrouping>:
 8000d0c:	b480      	push	{r7}
 8000d0e:	af00      	add	r7, sp, #0
 8000d10:	4b04      	ldr	r3, [pc, #16]	@ (8000d24 <__NVIC_GetPriorityGrouping+0x18>)
 8000d12:	68db      	ldr	r3, [r3, #12]
 8000d14:	0a1b      	lsrs	r3, r3, #8
 8000d16:	f003 0307 	and.w	r3, r3, #7
 8000d1a:	4618      	mov	r0, r3
 8000d1c:	46bd      	mov	sp, r7
 8000d1e:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000d22:	4770      	bx	lr
 8000d24:	e000ed00 	.word	0xe000ed00

08000d28 <__NVIC_EnableIRQ>:
 8000d28:	b480      	push	{r7}
 8000d2a:	b083      	sub	sp, #12
 8000d2c:	af00      	add	r7, sp, #0
 8000d2e:	4603      	mov	r3, r0
 8000d30:	71fb      	strb	r3, [r7, #7]
 8000d32:	f997 3007 	ldrsb.w	r3, [r7, #7]
 8000d36:	2b00      	cmp	r3, #0
 8000d38:	db0b      	blt.n	8000d52 <__NVIC_EnableIRQ+0x2a>
 8000d3a:	79fb      	ldrb	r3, [r7, #7]
 8000d3c:	f003 021f 	and.w	r2, r3, #31
 8000d40:	4907      	ldr	r1, [pc, #28]	@ (8000d60 <__NVIC_EnableIRQ+0x38>)
 8000d42:	f997 3007 	ldrsb.w	r3, [r7, #7]
 8000d46:	095b      	lsrs	r3, r3, #5
 8000d48:	2001      	movs	r0, #1
 8000d4a:	fa00 f202 	lsl.w	r2, r0, r2
 8000d4e:	f841 2023 	str.w	r2, [r1, r3, lsl #2]
 8000d52:	bf00      	nop
 8000d54:	370c      	adds	r7, #12
 8000d56:	46bd      	mov	sp, r7
 8000d58:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000d5c:	4770      	bx	lr
 8000d5e:	bf00      	nop
 8000d60:	e000e100 	.word	0xe000e100

08000d64 <__NVIC_SetPriority>:
 8000d64:	b480      	push	{r7}
 8000d66:	b083      	sub	sp, #12
 8000d68:	af00      	add	r7, sp, #0
 8000d6a:	4603      	mov	r3, r0
 8000d6c:	6039      	str	r1, [r7, #0]
 8000d6e:	71fb      	strb	r3, [r7, #7]
 8000d70:	f997 3007 	ldrsb.w	r3, [r7, #7]
 8000d74:	2b00      	cmp	r3, #0
 8000d76:	db0a      	blt.n	8000d8e <__NVIC_SetPriority+0x2a>
 8000d78:	683b      	ldr	r3, [r7, #0]
 8000d7a:	b2da      	uxtb	r2, r3
 8000d7c:	490c      	ldr	r1, [pc, #48]	@ (8000db0 <__NVIC_SetPriority+0x4c>)
 8000d7e:	f997 3007 	ldrsb.w	r3, [r7, #7]
 8000d82:	0112      	lsls	r2, r2, #4
 8000d84:	b2d2      	uxtb	r2, r2
 8000d86:	440b      	add	r3, r1
 8000d88:	f883 2300 	strb.w	r2, [r3, #768]	@ 0x300
 8000d8c:	e00a      	b.n	8000da4 <__NVIC_SetPriority+0x40>
 8000d8e:	683b      	ldr	r3, [r7, #0]
 8000d90:	b2da      	uxtb	r2, r3
 8000d92:	4908      	ldr	r1, [pc, #32]	@ (8000db4 <__NVIC_SetPriority+0x50>)
 8000d94:	79fb      	ldrb	r3, [r7, #7]
 8000d96:	f003 030f 	and.w	r3, r3, #15
 8000d9a:	3b04      	subs	r3, #4
 8000d9c:	0112      	lsls	r2, r2, #4
 8000d9e:	b2d2      	uxtb	r2, r2
 8000da0:	440b      	add	r3, r1
 8000da2:	761a      	strb	r2, [r3, #24]
 8000da4:	bf00      	nop
 8000da6:	370c      	adds	r7, #12
 8000da8:	46bd      	mov	sp, r7
 8000daa:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000dae:	4770      	bx	lr
 8000db0:	e000e100 	.word	0xe000e100
 8000db4:	e000ed00 	.word	0xe000ed00

08000db8 <NVIC_EncodePriority>:
 8000db8:	b480      	push	{r7}
 8000dba:	b089      	sub	sp, #36	@ 0x24
 8000dbc:	af00      	add	r7, sp, #0
 8000dbe:	60f8      	str	r0, [r7, #12]
 8000dc0:	60b9      	str	r1, [r7, #8]
 8000dc2:	607a      	str	r2, [r7, #4]
 8000dc4:	68fb      	ldr	r3, [r7, #12]
 8000dc6:	f003 0307 	and.w	r3, r3, #7
 8000dca:	61fb      	str	r3, [r7, #28]
 8000dcc:	69fb      	ldr	r3, [r7, #28]
 8000dce:	f1c3 0307 	rsb	r3, r3, #7
 8000dd2:	2b04      	cmp	r3, #4
 8000dd4:	bf28      	it	cs
 8000dd6:	2304      	movcs	r3, #4
 8000dd8:	61bb      	str	r3, [r7, #24]
 8000dda:	69fb      	ldr	r3, [r7, #28]
 8000ddc:	3304      	adds	r3, #4
 8000dde:	2b06      	cmp	r3, #6
 8000de0:	d902      	bls.n	8000de8 <NVIC_EncodePriority+0x30>
 8000de2:	69fb      	ldr	r3, [r7, #28]
 8000de4:	3b03      	subs	r3, #3
 8000de6:	e000      	b.n	8000dea <NVIC_EncodePriority+0x32>
 8000de8:	2300      	movs	r3, #0
 8000dea:	617b      	str	r3, [r7, #20]
 8000dec:	f04f 32ff 	mov.w	r2, #4294967295
 8000df0:	69bb      	ldr	r3, [r7, #24]
 8000df2:	fa02 f303 	lsl.w	r3, r2, r3
 8000df6:	43da      	mvns	r2, r3
 8000df8:	68bb      	ldr	r3, [r7, #8]
 8000dfa:	401a      	ands	r2, r3
 8000dfc:	697b      	ldr	r3, [r7, #20]
 8000dfe:	409a      	lsls	r2, r3
 8000e00:	f04f 31ff 	mov.w	r1, #4294967295
 8000e04:	697b      	ldr	r3, [r7, #20]
 8000e06:	fa01 f303 	lsl.w	r3, r1, r3
 8000e0a:	43d9      	mvns	r1, r3
 8000e0c:	687b      	ldr	r3, [r7, #4]
 8000e0e:	400b      	ands	r3, r1
 8000e10:	4313      	orrs	r3, r2
 8000e12:	4618      	mov	r0, r3
 8000e14:	3724      	adds	r7, #36	@ 0x24
 8000e16:	46bd      	mov	sp, r7
 8000e18:	f85d 7b04 	ldr.w	r7, [sp], #4
 8000e1c:	4770      	bx	lr
	...

08000e20 <SysTick_Config>:
 8000e20:	b580      	push	{r7, lr}
 8000e22:	b082      	sub	sp, #8
 8000e24:	af00      	add	r7, sp, #0
 8000e26:	6078      	str	r0, [r7, #4]
 8000e28:	687b      	ldr	r3, [r7, #4]
 8000e2a:	3b01      	subs	r3, #1
 8000e2c:	f1b3 7f80 	cmp.w	r3, #16777216	@ 0x1000000
 8000e30:	d301      	bcc.n	8000e36 <SysTick_Config+0x16>
 8000e32:	2301      	movs	r3, #1
 8000e34:	e00f      	b.n	8000e56 <SysTick_Config+0x36>
 8000e36:	4a0a      	ldr	r2, [pc, #40]	@ (8000e60 <SysTick_Config+0x40>)
 8000e38:	687b      	ldr	r3, [r7, #4]
 8000e3a:	3b01      	subs	r3, #1
 8000e3c:	6053      	str	r3, [r2, #4]
 8000e3e:	210f      	movs	r1, #15
 8000e40:	f04f 30ff 	mov.w	r0, #4294967295
 8000e44:	f7ff ff8e 	bl	8000d64 <__NVIC_SetPriority>
 8000e48:	4b05      	ldr	r3, [pc, #20]	@ (8000e60 <SysTick_Config+0x40>)
 8000e4a:	2200      	movs	r2, #0
 8000e4c:	609a      	str	r2, [r3, #8]
 8000e4e:	4b04      	ldr	r3, [pc, #16]	@ (8000e60 <SysTick_Config+0x40>)
 8000e50:	2207      	movs	r2, #7
 8000e52:	601a      	str	r2, [r3, #0]
 8000e54:	2300      	movs	r3, #0
 8000e56:	4618      	mov	r0, r3
 8000e58:	3708      	adds	r7, #8
 8000e5a:	46bd      	mov	sp, r7
 8000e5c:	bd80      	pop	{r7, pc}
 8000e5e:	bf00      	nop
 8000e60:	e000e010 	.word	0xe000e010

08000e64 <HAL_NVIC_SetPriorityGrouping>:
 8000e64:	b580      	push	{r7, lr}
 8000e66:	b082      	sub	sp, #8
 8000e68:	af00      	add	r7, sp, #0
 8000e6a:	6078      	str	r0, [r7, #4]
 8000e6c:	6878      	ldr	r0, [r7, #4]
 8000e6e:	f7ff ff29 	bl	8000cc4 <__NVIC_SetPriorityGrouping>
 8000e72:	bf00      	nop
 8000e74:	3708      	adds	r7, #8
 8000e76:	46bd      	mov	sp, r7
 8000e78:	bd80      	pop	{r7, pc}

08000e7a <HAL_NVIC_SetPriority>:
 8000e7a:	b580      	push	{r7, lr}
 8000e7c:	b086      	sub	sp, #24
 8000e7e:	af00      	add	r7, sp, #0
 8000e80:	4603      	mov	r3, r0
 8000e82:	60b9      	str	r1, [r7, #8]
 8000e84:	607a      	str	r2, [r7, #4]
 8000e86:	73fb      	strb	r3, [r7, #15]
 8000e88:	2300      	movs	r3, #0
 8000e8a:	617b      	str	r3, [r7, #20]
 8000e8c:	f7ff ff3e 	bl	8000d0c <__NVIC_GetPriorityGrouping>
 8000e90:	6178      	str	r0, [r7, #20]
 8000e92:	687a      	ldr	r2, [r7, #4]
 8000e94:	68b9      	ldr	r1, [r7, #8]
 8000e96:	6978      	ldr	r0, [r7, #20]
 8000e98:	f7ff ff8e 	bl	8000db8 <NVIC_EncodePriority>
 8000e9c:	4602      	mov	r2, r0
 8000e9e:	f997 300f 	ldrsb.w	r3, [r7, #15]
 8000ea2:	4611      	mov	r1, r2
 8000ea4:	4618      	mov	r0, r3
 8000ea6:	f7ff ff5d 	bl	8000d64 <__NVIC_SetPriority>
 8000eaa:	bf00      	nop
 8000eac:	3718      	adds	r7, #24
 8000eae:	46bd      	mov	sp, r7
 8000eb0:	bd80      	pop	{r7, pc}

08000eb2 <HAL_NVIC_EnableIRQ>:
 8000eb2:	b580      	push	{r7, lr}
 8000eb4:	b082      	sub	sp, #8
 8000eb6:	af00      	add	r7, sp, #0
 8000eb8:	4603      	mov	r3, r0
 8000eba:	71fb      	strb	r3, [r7, #7]
 8000ebc:	f997 3007 	ldrsb.w	r3, [r7, #7]
 8000ec0:	4618      	mov	r0, r3
 8000ec2:	f7ff ff31 	bl	8000d28 <__NVIC_EnableIRQ>
 8000ec6:	bf00      	nop
 8000ec8:	3708      	adds	r7, #8
 8000eca:	46bd      	mov	sp, r7
 8000ecc:	bd80      	pop	{r7, pc}

08000ece <HAL_SYSTICK_Config>:
 8000ece:	b580      	push	{r7, lr}
 8000ed0:	b082      	sub	sp, #8
 8000ed2:	af00      	add	r7, sp, #0
 8000ed4:	6078      	str	r0, [r7, #4]
 8000ed6:	6878      	ldr	r0, [r7, #4]
 8000ed8:	f7ff ffa2 	bl	8000e20 <SysTick_Config>
 8000edc:	4603      	mov	r3, r0
 8000ede:	4618      	mov	r0, r3
 8000ee0:	3708      	adds	r7, #8
 8000ee2:	46bd      	mov	sp, r7
 8000ee4:	bd80      	pop	{r7, pc}
	...

08000ee8 <HAL_GPIO_Init>:
 8000ee8:	b480      	push	{r7}
 8000eea:	b089      	sub	sp, #36	@ 0x24
 8000eec:	af00      	add	r7, sp, #0
 8000eee:	6078      	str	r0, [r7, #4]
 8000ef0:	6039      	str	r1, [r7, #0]
 8000ef2:	2300      	movs	r3, #0
 8000ef4:	617b      	str	r3, [r7, #20]
 8000ef6:	2300      	movs	r3, #0
 8000ef8:	613b      	str	r3, [r7, #16]
 8000efa:	2300      	movs	r3, #0
 8000efc:	61bb      	str	r3, [r7, #24]
 8000efe:	2300      	movs	r3, #0
 8000f00:	61fb      	str	r3, [r7, #28]
 8000f02:	e159      	b.n	80011b8 <HAL_GPIO_Init+0x2d0>
 8000f04:	2201      	movs	r2, #1
 8000f06:	69fb      	ldr	r3, [r7, #28]
 8000f08:	fa02 f303 	lsl.w	r3, r2, r3
 8000f0c:	617b      	str	r3, [r7, #20]
 8000f0e:	683b      	ldr	r3, [r7, #0]
 8000f10:	681b      	ldr	r3, [r3, #0]
 8000f12:	697a      	ldr	r2, [r7, #20]
 8000f14:	4013      	ands	r3, r2
 8000f16:	613b      	str	r3, [r7, #16]
 8000f18:	693a      	ldr	r2, [r7, #16]
 8000f1a:	697b      	ldr	r3, [r7, #20]
 8000f1c:	429a      	cmp	r2, r3
 8000f1e:	f040 8148 	bne.w	80011b2 <HAL_GPIO_Init+0x2ca>
 8000f22:	683b      	ldr	r3, [r7, #0]
 8000f24:	685b      	ldr	r3, [r3, #4]
 8000f26:	f003 0303 	and.w	r3, r3, #3
 8000f2a:	2b01      	cmp	r3, #1
 8000f2c:	d005      	beq.n	8000f3a <HAL_GPIO_Init+0x52>
 8000f2e:	683b      	ldr	r3, [r7, #0]
 8000f30:	685b      	ldr	r3, [r3, #4]
 8000f32:	f003 0303 	and.w	r3, r3, #3
 8000f36:	2b02      	cmp	r3, #2
 8000f38:	d130      	bne.n	8000f9c <HAL_GPIO_Init+0xb4>
 8000f3a:	687b      	ldr	r3, [r7, #4]
 8000f3c:	689b      	ldr	r3, [r3, #8]
 8000f3e:	61bb      	str	r3, [r7, #24]
 8000f40:	69fb      	ldr	r3, [r7, #28]
 8000f42:	005b      	lsls	r3, r3, #1
 8000f44:	2203      	movs	r2, #3
 8000f46:	fa02 f303 	lsl.w	r3, r2, r3
 8000f4a:	43db      	mvns	r3, r3
 8000f4c:	69ba      	ldr	r2, [r7, #24]
 8000f4e:	4013      	ands	r3, r2
 8000f50:	61bb      	str	r3, [r7, #24]
 8000f52:	683b      	ldr	r3, [r7, #0]
 8000f54:	68da      	ldr	r2, [r3, #12]
 8000f56:	69fb      	ldr	r3, [r7, #28]
 8000f58:	005b      	lsls	r3, r3, #1
 8000f5a:	fa02 f303 	lsl.w	r3, r2, r3
 8000f5e:	69ba      	ldr	r2, [r7, #24]
 8000f60:	4313      	orrs	r3, r2
 8000f62:	61bb      	str	r3, [r7, #24]
 8000f64:	687b      	ldr	r3, [r7, #4]
 8000f66:	69ba      	ldr	r2, [r7, #24]
 8000f68:	609a      	str	r2, [r3, #8]
 8000f6a:	687b      	ldr	r3, [r7, #4]
 8000f6c:	685b      	ldr	r3, [r3, #4]
 8000f6e:	61bb      	str	r3, [r7, #24]
 8000f70:	2201      	movs	r2, #1
 8000f72:	69fb      	ldr	r3, [r7, #28]
 8000f74:	fa02 f303 	lsl.w	r3, r2, r3
 8000f78:	43db      	mvns	r3, r3
 8000f7a:	69ba      	ldr	r2, [r7, #24]
 8000f7c:	4013      	ands	r3, r2
 8000f7e:	61bb      	str	r3, [r7, #24]
 8000f80:	683b      	ldr	r3, [r7, #0]
 8000f82:	685b      	ldr	r3, [r3, #4]
 8000f84:	091b      	lsrs	r3, r3, #4
 8000f86:	f003 0201 	and.w	r2, r3, #1
 8000f8a:	69fb      	ldr	r3, [r7, #28]
 8000f8c:	fa02 f303 	lsl.w	r3, r2, r3
 8000f90:	69ba      	ldr	r2, [r7, #24]
 8000f92:	4313      	orrs	r3, r2
 8000f94:	61bb      	str	r3, [r7, #24]
 8000f96:	687b      	ldr	r3, [r7, #4]
 8000f98:	69ba      	ldr	r2, [r7, #24]
 8000f9a:	605a      	str	r2, [r3, #4]
 8000f9c:	683b      	ldr	r3, [r7, #0]
 8000f9e:	685b      	ldr	r3, [r3, #4]
 8000fa0:	f003 0303 	and.w	r3, r3, #3
 8000fa4:	2b03      	cmp	r3, #3
 8000fa6:	d017      	beq.n	8000fd8 <HAL_GPIO_Init+0xf0>
 8000fa8:	687b      	ldr	r3, [r7, #4]
 8000faa:	68db      	ldr	r3, [r3, #12]
 8000fac:	61bb      	str	r3, [r7, #24]
 8000fae:	69fb      	ldr	r3, [r7, #28]
 8000fb0:	005b      	lsls	r3, r3, #1
 8000fb2:	2203      	movs	r2, #3
 8000fb4:	fa02 f303 	lsl.w	r3, r2, r3
 8000fb8:	43db      	mvns	r3, r3
 8000fba:	69ba      	ldr	r2, [r7, #24]
 8000fbc:	4013      	ands	r3, r2
 8000fbe:	61bb      	str	r3, [r7, #24]
 8000fc0:	683b      	ldr	r3, [r7, #0]
 8000fc2:	689a      	ldr	r2, [r3, #8]
 8000fc4:	69fb      	ldr	r3, [r7, #28]
 8000fc6:	005b      	lsls	r3, r3, #1
 8000fc8:	fa02 f303 	lsl.w	r3, r2, r3
 8000fcc:	69ba      	ldr	r2, [r7, #24]
 8000fce:	4313      	orrs	r3, r2
 8000fd0:	61bb      	str	r3, [r7, #24]
 8000fd2:	687b      	ldr	r3, [r7, #4]
 8000fd4:	69ba      	ldr	r2, [r7, #24]
 8000fd6:	60da      	str	r2, [r3, #12]
 8000fd8:	683b      	ldr	r3, [r7, #0]
 8000fda:	685b      	ldr	r3, [r3, #4]
 8000fdc:	f003 0303 	and.w	r3, r3, #3
 8000fe0:	2b02      	cmp	r3, #2
 8000fe2:	d123      	bne.n	800102c <HAL_GPIO_Init+0x144>
 8000fe4:	69fb      	ldr	r3, [r7, #28]
 8000fe6:	08da      	lsrs	r2, r3, #3
 8000fe8:	687b      	ldr	r3, [r7, #4]
 8000fea:	3208      	adds	r2, #8
 8000fec:	f853 3022 	ldr.w	r3, [r3, r2, lsl #2]
 8000ff0:	61bb      	str	r3, [r7, #24]
 8000ff2:	69fb      	ldr	r3, [r7, #28]
 8000ff4:	f003 0307 	and.w	r3, r3, #7
 8000ff8:	009b      	lsls	r3, r3, #2
 8000ffa:	220f      	movs	r2, #15
 8000ffc:	fa02 f303 	lsl.w	r3, r2, r3
 8001000:	43db      	mvns	r3, r3
 8001002:	69ba      	ldr	r2, [r7, #24]
 8001004:	4013      	ands	r3, r2
 8001006:	61bb      	str	r3, [r7, #24]
 8001008:	683b      	ldr	r3, [r7, #0]
 800100a:	691a      	ldr	r2, [r3, #16]
 800100c:	69fb      	ldr	r3, [r7, #28]
 800100e:	f003 0307 	and.w	r3, r3, #7
 8001012:	009b      	lsls	r3, r3, #2
 8001014:	fa02 f303 	lsl.w	r3, r2, r3
 8001018:	69ba      	ldr	r2, [r7, #24]
 800101a:	4313      	orrs	r3, r2
 800101c:	61bb      	str	r3, [r7, #24]
 800101e:	69fb      	ldr	r3, [r7, #28]
 8001020:	08da      	lsrs	r2, r3, #3
 8001022:	687b      	ldr	r3, [r7, #4]
 8001024:	3208      	adds	r2, #8
 8001026:	69b9      	ldr	r1, [r7, #24]
 8001028:	f843 1022 	str.w	r1, [r3, r2, lsl #2]
 800102c:	687b      	ldr	r3, [r7, #4]
 800102e:	681b      	ldr	r3, [r3, #0]
 8001030:	61bb      	str	r3, [r7, #24]
 8001032:	69fb      	ldr	r3, [r7, #28]
 8001034:	005b      	lsls	r3, r3, #1
 8001036:	2203      	movs	r2, #3
 8001038:	fa02 f303 	lsl.w	r3, r2, r3
 800103c:	43db      	mvns	r3, r3
 800103e:	69ba      	ldr	r2, [r7, #24]
 8001040:	4013      	ands	r3, r2
 8001042:	61bb      	str	r3, [r7, #24]
 8001044:	683b      	ldr	r3, [r7, #0]
 8001046:	685b      	ldr	r3, [r3, #4]
 8001048:	f003 0203 	and.w	r2, r3, #3
 800104c:	69fb      	ldr	r3, [r7, #28]
 800104e:	005b      	lsls	r3, r3, #1
 8001050:	fa02 f303 	lsl.w	r3, r2, r3
 8001054:	69ba      	ldr	r2, [r7, #24]
 8001056:	4313      	orrs	r3, r2
 8001058:	61bb      	str	r3, [r7, #24]
 800105a:	687b      	ldr	r3, [r7, #4]
 800105c:	69ba      	ldr	r2, [r7, #24]
 800105e:	601a      	str	r2, [r3, #0]
 8001060:	683b      	ldr	r3, [r7, #0]
 8001062:	685b      	ldr	r3, [r3, #4]
 8001064:	f403 3340 	and.w	r3, r3, #196608	@ 0x30000
 8001068:	2b00      	cmp	r3, #0
 800106a:	f000 80a2 	beq.w	80011b2 <HAL_GPIO_Init+0x2ca>
 800106e:	2300      	movs	r3, #0
 8001070:	60fb      	str	r3, [r7, #12]
 8001072:	4b57      	ldr	r3, [pc, #348]	@ (80011d0 <HAL_GPIO_Init+0x2e8>)
 8001074:	6c5b      	ldr	r3, [r3, #68]	@ 0x44
 8001076:	4a56      	ldr	r2, [pc, #344]	@ (80011d0 <HAL_GPIO_Init+0x2e8>)
 8001078:	f443 4380 	orr.w	r3, r3, #16384	@ 0x4000
 800107c:	6453      	str	r3, [r2, #68]	@ 0x44
 800107e:	4b54      	ldr	r3, [pc, #336]	@ (80011d0 <HAL_GPIO_Init+0x2e8>)
 8001080:	6c5b      	ldr	r3, [r3, #68]	@ 0x44
 8001082:	f403 4380 	and.w	r3, r3, #16384	@ 0x4000
 8001086:	60fb      	str	r3, [r7, #12]
 8001088:	68fb      	ldr	r3, [r7, #12]
 800108a:	4a52      	ldr	r2, [pc, #328]	@ (80011d4 <HAL_GPIO_Init+0x2ec>)
 800108c:	69fb      	ldr	r3, [r7, #28]
 800108e:	089b      	lsrs	r3, r3, #2
 8001090:	3302      	adds	r3, #2
 8001092:	f852 3023 	ldr.w	r3, [r2, r3, lsl #2]
 8001096:	61bb      	str	r3, [r7, #24]
 8001098:	69fb      	ldr	r3, [r7, #28]
 800109a:	f003 0303 	and.w	r3, r3, #3
 800109e:	009b      	lsls	r3, r3, #2
 80010a0:	220f      	movs	r2, #15
 80010a2:	fa02 f303 	lsl.w	r3, r2, r3
 80010a6:	43db      	mvns	r3, r3
 80010a8:	69ba      	ldr	r2, [r7, #24]
 80010aa:	4013      	ands	r3, r2
 80010ac:	61bb      	str	r3, [r7, #24]
 80010ae:	687b      	ldr	r3, [r7, #4]
 80010b0:	4a49      	ldr	r2, [pc, #292]	@ (80011d8 <HAL_GPIO_Init+0x2f0>)
 80010b2:	4293      	cmp	r3, r2
 80010b4:	d019      	beq.n	80010ea <HAL_GPIO_Init+0x202>
 80010b6:	687b      	ldr	r3, [r7, #4]
 80010b8:	4a48      	ldr	r2, [pc, #288]	@ (80011dc <HAL_GPIO_Init+0x2f4>)
 80010ba:	4293      	cmp	r3, r2
 80010bc:	d013      	beq.n	80010e6 <HAL_GPIO_Init+0x1fe>
 80010be:	687b      	ldr	r3, [r7, #4]
 80010c0:	4a47      	ldr	r2, [pc, #284]	@ (80011e0 <HAL_GPIO_Init+0x2f8>)
 80010c2:	4293      	cmp	r3, r2
 80010c4:	d00d      	beq.n	80010e2 <HAL_GPIO_Init+0x1fa>
 80010c6:	687b      	ldr	r3, [r7, #4]
 80010c8:	4a46      	ldr	r2, [pc, #280]	@ (80011e4 <HAL_GPIO_Init+0x2fc>)
 80010ca:	4293      	cmp	r3, r2
 80010cc:	d007      	beq.n	80010de <HAL_GPIO_Init+0x1f6>
 80010ce:	687b      	ldr	r3, [r7, #4]
 80010d0:	4a45      	ldr	r2, [pc, #276]	@ (80011e8 <HAL_GPIO_Init+0x300>)
 80010d2:	4293      	cmp	r3, r2
 80010d4:	d101      	bne.n	80010da <HAL_GPIO_Init+0x1f2>
 80010d6:	2304      	movs	r3, #4
 80010d8:	e008      	b.n	80010ec <HAL_GPIO_Init+0x204>
 80010da:	2307      	movs	r3, #7
 80010dc:	e006      	b.n	80010ec <HAL_GPIO_Init+0x204>
 80010de:	2303      	movs	r3, #3
 80010e0:	e004      	b.n	80010ec <HAL_GPIO_Init+0x204>
 80010e2:	2302      	movs	r3, #2
 80010e4:	e002      	b.n	80010ec <HAL_GPIO_Init+0x204>
 80010e6:	2301      	movs	r3, #1
 80010e8:	e000      	b.n	80010ec <HAL_GPIO_Init+0x204>
 80010ea:	2300      	movs	r3, #0
 80010ec:	69fa      	ldr	r2, [r7, #28]
 80010ee:	f002 0203 	and.w	r2, r2, #3
 80010f2:	0092      	lsls	r2, r2, #2
 80010f4:	4093      	lsls	r3, r2
 80010f6:	69ba      	ldr	r2, [r7, #24]
 80010f8:	4313      	orrs	r3, r2
 80010fa:	61bb      	str	r3, [r7, #24]
 80010fc:	4935      	ldr	r1, [pc, #212]	@ (80011d4 <HAL_GPIO_Init+0x2ec>)
 80010fe:	69fb      	ldr	r3, [r7, #28]
 8001100:	089b      	lsrs	r3, r3, #2
 8001102:	3302      	adds	r3, #2
 8001104:	69ba      	ldr	r2, [r7, #24]
 8001106:	f841 2023 	str.w	r2, [r1, r3, lsl #2]
 800110a:	4b38      	ldr	r3, [pc, #224]	@ (80011ec <HAL_GPIO_Init+0x304>)
 800110c:	689b      	ldr	r3, [r3, #8]
 800110e:	61bb      	str	r3, [r7, #24]
 8001110:	693b      	ldr	r3, [r7, #16]
 8001112:	43db      	mvns	r3, r3
 8001114:	69ba      	ldr	r2, [r7, #24]
 8001116:	4013      	ands	r3, r2
 8001118:	61bb      	str	r3, [r7, #24]
 800111a:	683b      	ldr	r3, [r7, #0]
 800111c:	685b      	ldr	r3, [r3, #4]
 800111e:	f403 1380 	and.w	r3, r3, #1048576	@ 0x100000
 8001122:	2b00      	cmp	r3, #0
 8001124:	d003      	beq.n	800112e <HAL_GPIO_Init+0x246>
 8001126:	69ba      	ldr	r2, [r7, #24]
 8001128:	693b      	ldr	r3, [r7, #16]
 800112a:	4313      	orrs	r3, r2
 800112c:	61bb      	str	r3, [r7, #24]
 800112e:	4a2f      	ldr	r2, [pc, #188]	@ (80011ec <HAL_GPIO_Init+0x304>)
 8001130:	69bb      	ldr	r3, [r7, #24]
 8001132:	6093      	str	r3, [r2, #8]
 8001134:	4b2d      	ldr	r3, [pc, #180]	@ (80011ec <HAL_GPIO_Init+0x304>)
 8001136:	68db      	ldr	r3, [r3, #12]
 8001138:	61bb      	str	r3, [r7, #24]
 800113a:	693b      	ldr	r3, [r7, #16]
 800113c:	43db      	mvns	r3, r3
 800113e:	69ba      	ldr	r2, [r7, #24]
 8001140:	4013      	ands	r3, r2
 8001142:	61bb      	str	r3, [r7, #24]
 8001144:	683b      	ldr	r3, [r7, #0]
 8001146:	685b      	ldr	r3, [r3, #4]
 8001148:	f403 1300 	and.w	r3, r3, #2097152	@ 0x200000
 800114c:	2b00      	cmp	r3, #0
 800114e:	d003      	beq.n	8001158 <HAL_GPIO_Init+0x270>
 8001150:	69ba      	ldr	r2, [r7, #24]
 8001152:	693b      	ldr	r3, [r7, #16]
 8001154:	4313      	orrs	r3, r2
 8001156:	61bb      	str	r3, [r7, #24]
 8001158:	4a24      	ldr	r2, [pc, #144]	@ (80011ec <HAL_GPIO_Init+0x304>)
 800115a:	69bb      	ldr	r3, [r7, #24]
 800115c:	60d3      	str	r3, [r2, #12]
 800115e:	4b23      	ldr	r3, [pc, #140]	@ (80011ec <HAL_GPIO_Init+0x304>)
 8001160:	685b      	ldr	r3, [r3, #4]
 8001162:	61bb      	str	r3, [r7, #24]
 8001164:	693b      	ldr	r3, [r7, #16]
 8001166:	43db      	mvns	r3, r3
 8001168:	69ba      	ldr	r2, [r7, #24]
 800116a:	4013      	ands	r3, r2
 800116c:	61bb      	str	r3, [r7, #24]
 800116e:	683b      	ldr	r3, [r7, #0]
 8001170:	685b      	ldr	r3, [r3, #4]
 8001172:	f403 3300 	and.w	r3, r3, #131072	@ 0x20000
 8001176:	2b00      	cmp	r3, #0
 8001178:	d003      	beq.n	8001182 <HAL_GPIO_Init+0x29a>
 800117a:	69ba      	ldr	r2, [r7, #24]
 800117c:	693b      	ldr	r3, [r7, #16]
 800117e:	4313      	orrs	r3, r2
 8001180:	61bb      	str	r3, [r7, #24]
 8001182:	4a1a      	ldr	r2, [pc, #104]	@ (80011ec <HAL_GPIO_Init+0x304>)
 8001184:	69bb      	ldr	r3, [r7, #24]
 8001186:	6053      	str	r3, [r2, #4]
 8001188:	4b18      	ldr	r3, [pc, #96]	@ (80011ec <HAL_GPIO_Init+0x304>)
 800118a:	681b      	ldr	r3, [r3, #0]
 800118c:	61bb      	str	r3, [r7, #24]
 800118e:	693b      	ldr	r3, [r7, #16]
 8001190:	43db      	mvns	r3, r3
 8001192:	69ba      	ldr	r2, [r7, #24]
 8001194:	4013      	ands	r3, r2
 8001196:	61bb      	str	r3, [r7, #24]
 8001198:	683b      	ldr	r3, [r7, #0]
 800119a:	685b      	ldr	r3, [r3, #4]
 800119c:	f403 3380 	and.w	r3, r3, #65536	@ 0x10000
 80011a0:	2b00      	cmp	r3, #0
 80011a2:	d003      	beq.n	80011ac <HAL_GPIO_Init+0x2c4>
 80011a4:	69ba      	ldr	r2, [r7, #24]
 80011a6:	693b      	ldr	r3, [r7, #16]
 80011a8:	4313      	orrs	r3, r2
 80011aa:	61bb      	str	r3, [r7, #24]
 80011ac:	4a0f      	ldr	r2, [pc, #60]	@ (80011ec <HAL_GPIO_Init+0x304>)
 80011ae:	69bb      	ldr	r3, [r7, #24]
 80011b0:	6013      	str	r3, [r2, #0]
 80011b2:	69fb      	ldr	r3, [r7, #28]
 80011b4:	3301      	adds	r3, #1
 80011b6:	61fb      	str	r3, [r7, #28]
 80011b8:	69fb      	ldr	r3, [r7, #28]
 80011ba:	2b0f      	cmp	r3, #15
 80011bc:	f67f aea2 	bls.w	8000f04 <HAL_GPIO_Init+0x1c>
 80011c0:	bf00      	nop
 80011c2:	bf00      	nop
 80011c4:	3724      	adds	r7, #36	@ 0x24
 80011c6:	46bd      	mov	sp, r7
 80011c8:	f85d 7b04 	ldr.w	r7, [sp], #4
 80011cc:	4770      	bx	lr
 80011ce:	bf00      	nop
 80011d0:	40023800 	.word	0x40023800
 80011d4:	40013800 	.word	0x40013800
 80011d8:	40020000 	.word	0x40020000
 80011dc:	40020400 	.word	0x40020400
 80011e0:	40020800 	.word	0x40020800
 80011e4:	40020c00 	.word	0x40020c00
 80011e8:	40021000 	.word	0x40021000
 80011ec:	40013c00 	.word	0x40013c00

080011f0 <HAL_GPIO_WritePin>:
 80011f0:	b480      	push	{r7}
 80011f2:	b083      	sub	sp, #12
 80011f4:	af00      	add	r7, sp, #0
 80011f6:	6078      	str	r0, [r7, #4]
 80011f8:	460b      	mov	r3, r1
 80011fa:	807b      	strh	r3, [r7, #2]
 80011fc:	4613      	mov	r3, r2
 80011fe:	707b      	strb	r3, [r7, #1]
 8001200:	787b      	ldrb	r3, [r7, #1]
 8001202:	2b00      	cmp	r3, #0
 8001204:	d003      	beq.n	800120e <HAL_GPIO_WritePin+0x1e>
 8001206:	887a      	ldrh	r2, [r7, #2]
 8001208:	687b      	ldr	r3, [r7, #4]
 800120a:	619a      	str	r2, [r3, #24]
 800120c:	e003      	b.n	8001216 <HAL_GPIO_WritePin+0x26>
 800120e:	887b      	ldrh	r3, [r7, #2]
 8001210:	041a      	lsls	r2, r3, #16
 8001212:	687b      	ldr	r3, [r7, #4]
 8001214:	619a      	str	r2, [r3, #24]
 8001216:	bf00      	nop
 8001218:	370c      	adds	r7, #12
 800121a:	46bd      	mov	sp, r7
 800121c:	f85d 7b04 	ldr.w	r7, [sp], #4
 8001220:	4770      	bx	lr
	...

08001224 <HAL_RCC_OscConfig>:
 8001224:	b580      	push	{r7, lr}
 8001226:	b086      	sub	sp, #24
 8001228:	af00      	add	r7, sp, #0
 800122a:	6078      	str	r0, [r7, #4]
 800122c:	687b      	ldr	r3, [r7, #4]
 800122e:	2b00      	cmp	r3, #0
 8001230:	d101      	bne.n	8001236 <HAL_RCC_OscConfig+0x12>
 8001232:	2301      	movs	r3, #1
 8001234:	e267      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001236:	687b      	ldr	r3, [r7, #4]
 8001238:	681b      	ldr	r3, [r3, #0]
 800123a:	f003 0301 	and.w	r3, r3, #1
 800123e:	2b00      	cmp	r3, #0
 8001240:	d075      	beq.n	800132e <HAL_RCC_OscConfig+0x10a>
 8001242:	4b88      	ldr	r3, [pc, #544]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001244:	689b      	ldr	r3, [r3, #8]
 8001246:	f003 030c 	and.w	r3, r3, #12
 800124a:	2b04      	cmp	r3, #4
 800124c:	d00c      	beq.n	8001268 <HAL_RCC_OscConfig+0x44>
 800124e:	4b85      	ldr	r3, [pc, #532]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001250:	689b      	ldr	r3, [r3, #8]
 8001252:	f003 030c 	and.w	r3, r3, #12
 8001256:	2b08      	cmp	r3, #8
 8001258:	d112      	bne.n	8001280 <HAL_RCC_OscConfig+0x5c>
 800125a:	4b82      	ldr	r3, [pc, #520]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 800125c:	685b      	ldr	r3, [r3, #4]
 800125e:	f403 0380 	and.w	r3, r3, #4194304	@ 0x400000
 8001262:	f5b3 0f80 	cmp.w	r3, #4194304	@ 0x400000
 8001266:	d10b      	bne.n	8001280 <HAL_RCC_OscConfig+0x5c>
 8001268:	4b7e      	ldr	r3, [pc, #504]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 800126a:	681b      	ldr	r3, [r3, #0]
 800126c:	f403 3300 	and.w	r3, r3, #131072	@ 0x20000
 8001270:	2b00      	cmp	r3, #0
 8001272:	d05b      	beq.n	800132c <HAL_RCC_OscConfig+0x108>
 8001274:	687b      	ldr	r3, [r7, #4]
 8001276:	685b      	ldr	r3, [r3, #4]
 8001278:	2b00      	cmp	r3, #0
 800127a:	d157      	bne.n	800132c <HAL_RCC_OscConfig+0x108>
 800127c:	2301      	movs	r3, #1
 800127e:	e242      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001280:	687b      	ldr	r3, [r7, #4]
 8001282:	685b      	ldr	r3, [r3, #4]
 8001284:	f5b3 3f80 	cmp.w	r3, #65536	@ 0x10000
 8001288:	d106      	bne.n	8001298 <HAL_RCC_OscConfig+0x74>
 800128a:	4b76      	ldr	r3, [pc, #472]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 800128c:	681b      	ldr	r3, [r3, #0]
 800128e:	4a75      	ldr	r2, [pc, #468]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001290:	f443 3380 	orr.w	r3, r3, #65536	@ 0x10000
 8001294:	6013      	str	r3, [r2, #0]
 8001296:	e01d      	b.n	80012d4 <HAL_RCC_OscConfig+0xb0>
 8001298:	687b      	ldr	r3, [r7, #4]
 800129a:	685b      	ldr	r3, [r3, #4]
 800129c:	f5b3 2fa0 	cmp.w	r3, #327680	@ 0x50000
 80012a0:	d10c      	bne.n	80012bc <HAL_RCC_OscConfig+0x98>
 80012a2:	4b70      	ldr	r3, [pc, #448]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012a4:	681b      	ldr	r3, [r3, #0]
 80012a6:	4a6f      	ldr	r2, [pc, #444]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012a8:	f443 2380 	orr.w	r3, r3, #262144	@ 0x40000
 80012ac:	6013      	str	r3, [r2, #0]
 80012ae:	4b6d      	ldr	r3, [pc, #436]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012b0:	681b      	ldr	r3, [r3, #0]
 80012b2:	4a6c      	ldr	r2, [pc, #432]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012b4:	f443 3380 	orr.w	r3, r3, #65536	@ 0x10000
 80012b8:	6013      	str	r3, [r2, #0]
 80012ba:	e00b      	b.n	80012d4 <HAL_RCC_OscConfig+0xb0>
 80012bc:	4b69      	ldr	r3, [pc, #420]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012be:	681b      	ldr	r3, [r3, #0]
 80012c0:	4a68      	ldr	r2, [pc, #416]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012c2:	f423 3380 	bic.w	r3, r3, #65536	@ 0x10000
 80012c6:	6013      	str	r3, [r2, #0]
 80012c8:	4b66      	ldr	r3, [pc, #408]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012ca:	681b      	ldr	r3, [r3, #0]
 80012cc:	4a65      	ldr	r2, [pc, #404]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012ce:	f423 2380 	bic.w	r3, r3, #262144	@ 0x40000
 80012d2:	6013      	str	r3, [r2, #0]
 80012d4:	687b      	ldr	r3, [r7, #4]
 80012d6:	685b      	ldr	r3, [r3, #4]
 80012d8:	2b00      	cmp	r3, #0
 80012da:	d013      	beq.n	8001304 <HAL_RCC_OscConfig+0xe0>
 80012dc:	f7ff fce6 	bl	8000cac <HAL_GetTick>
 80012e0:	6138      	str	r0, [r7, #16]
 80012e2:	e008      	b.n	80012f6 <HAL_RCC_OscConfig+0xd2>
 80012e4:	f7ff fce2 	bl	8000cac <HAL_GetTick>
 80012e8:	4602      	mov	r2, r0
 80012ea:	693b      	ldr	r3, [r7, #16]
 80012ec:	1ad3      	subs	r3, r2, r3
 80012ee:	2b64      	cmp	r3, #100	@ 0x64
 80012f0:	d901      	bls.n	80012f6 <HAL_RCC_OscConfig+0xd2>
 80012f2:	2303      	movs	r3, #3
 80012f4:	e207      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 80012f6:	4b5b      	ldr	r3, [pc, #364]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80012f8:	681b      	ldr	r3, [r3, #0]
 80012fa:	f403 3300 	and.w	r3, r3, #131072	@ 0x20000
 80012fe:	2b00      	cmp	r3, #0
 8001300:	d0f0      	beq.n	80012e4 <HAL_RCC_OscConfig+0xc0>
 8001302:	e014      	b.n	800132e <HAL_RCC_OscConfig+0x10a>
 8001304:	f7ff fcd2 	bl	8000cac <HAL_GetTick>
 8001308:	6138      	str	r0, [r7, #16]
 800130a:	e008      	b.n	800131e <HAL_RCC_OscConfig+0xfa>
 800130c:	f7ff fcce 	bl	8000cac <HAL_GetTick>
 8001310:	4602      	mov	r2, r0
 8001312:	693b      	ldr	r3, [r7, #16]
 8001314:	1ad3      	subs	r3, r2, r3
 8001316:	2b64      	cmp	r3, #100	@ 0x64
 8001318:	d901      	bls.n	800131e <HAL_RCC_OscConfig+0xfa>
 800131a:	2303      	movs	r3, #3
 800131c:	e1f3      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 800131e:	4b51      	ldr	r3, [pc, #324]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001320:	681b      	ldr	r3, [r3, #0]
 8001322:	f403 3300 	and.w	r3, r3, #131072	@ 0x20000
 8001326:	2b00      	cmp	r3, #0
 8001328:	d1f0      	bne.n	800130c <HAL_RCC_OscConfig+0xe8>
 800132a:	e000      	b.n	800132e <HAL_RCC_OscConfig+0x10a>
 800132c:	bf00      	nop
 800132e:	687b      	ldr	r3, [r7, #4]
 8001330:	681b      	ldr	r3, [r3, #0]
 8001332:	f003 0302 	and.w	r3, r3, #2
 8001336:	2b00      	cmp	r3, #0
 8001338:	d063      	beq.n	8001402 <HAL_RCC_OscConfig+0x1de>
 800133a:	4b4a      	ldr	r3, [pc, #296]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 800133c:	689b      	ldr	r3, [r3, #8]
 800133e:	f003 030c 	and.w	r3, r3, #12
 8001342:	2b00      	cmp	r3, #0
 8001344:	d00b      	beq.n	800135e <HAL_RCC_OscConfig+0x13a>
 8001346:	4b47      	ldr	r3, [pc, #284]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001348:	689b      	ldr	r3, [r3, #8]
 800134a:	f003 030c 	and.w	r3, r3, #12
 800134e:	2b08      	cmp	r3, #8
 8001350:	d11c      	bne.n	800138c <HAL_RCC_OscConfig+0x168>
 8001352:	4b44      	ldr	r3, [pc, #272]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001354:	685b      	ldr	r3, [r3, #4]
 8001356:	f403 0380 	and.w	r3, r3, #4194304	@ 0x400000
 800135a:	2b00      	cmp	r3, #0
 800135c:	d116      	bne.n	800138c <HAL_RCC_OscConfig+0x168>
 800135e:	4b41      	ldr	r3, [pc, #260]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001360:	681b      	ldr	r3, [r3, #0]
 8001362:	f003 0302 	and.w	r3, r3, #2
 8001366:	2b00      	cmp	r3, #0
 8001368:	d005      	beq.n	8001376 <HAL_RCC_OscConfig+0x152>
 800136a:	687b      	ldr	r3, [r7, #4]
 800136c:	68db      	ldr	r3, [r3, #12]
 800136e:	2b01      	cmp	r3, #1
 8001370:	d001      	beq.n	8001376 <HAL_RCC_OscConfig+0x152>
 8001372:	2301      	movs	r3, #1
 8001374:	e1c7      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001376:	4b3b      	ldr	r3, [pc, #236]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001378:	681b      	ldr	r3, [r3, #0]
 800137a:	f023 02f8 	bic.w	r2, r3, #248	@ 0xf8
 800137e:	687b      	ldr	r3, [r7, #4]
 8001380:	691b      	ldr	r3, [r3, #16]
 8001382:	00db      	lsls	r3, r3, #3
 8001384:	4937      	ldr	r1, [pc, #220]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001386:	4313      	orrs	r3, r2
 8001388:	600b      	str	r3, [r1, #0]
 800138a:	e03a      	b.n	8001402 <HAL_RCC_OscConfig+0x1de>
 800138c:	687b      	ldr	r3, [r7, #4]
 800138e:	68db      	ldr	r3, [r3, #12]
 8001390:	2b00      	cmp	r3, #0
 8001392:	d020      	beq.n	80013d6 <HAL_RCC_OscConfig+0x1b2>
 8001394:	4b34      	ldr	r3, [pc, #208]	@ (8001468 <HAL_RCC_OscConfig+0x244>)
 8001396:	2201      	movs	r2, #1
 8001398:	601a      	str	r2, [r3, #0]
 800139a:	f7ff fc87 	bl	8000cac <HAL_GetTick>
 800139e:	6138      	str	r0, [r7, #16]
 80013a0:	e008      	b.n	80013b4 <HAL_RCC_OscConfig+0x190>
 80013a2:	f7ff fc83 	bl	8000cac <HAL_GetTick>
 80013a6:	4602      	mov	r2, r0
 80013a8:	693b      	ldr	r3, [r7, #16]
 80013aa:	1ad3      	subs	r3, r2, r3
 80013ac:	2b02      	cmp	r3, #2
 80013ae:	d901      	bls.n	80013b4 <HAL_RCC_OscConfig+0x190>
 80013b0:	2303      	movs	r3, #3
 80013b2:	e1a8      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 80013b4:	4b2b      	ldr	r3, [pc, #172]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80013b6:	681b      	ldr	r3, [r3, #0]
 80013b8:	f003 0302 	and.w	r3, r3, #2
 80013bc:	2b00      	cmp	r3, #0
 80013be:	d0f0      	beq.n	80013a2 <HAL_RCC_OscConfig+0x17e>
 80013c0:	4b28      	ldr	r3, [pc, #160]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80013c2:	681b      	ldr	r3, [r3, #0]
 80013c4:	f023 02f8 	bic.w	r2, r3, #248	@ 0xf8
 80013c8:	687b      	ldr	r3, [r7, #4]
 80013ca:	691b      	ldr	r3, [r3, #16]
 80013cc:	00db      	lsls	r3, r3, #3
 80013ce:	4925      	ldr	r1, [pc, #148]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80013d0:	4313      	orrs	r3, r2
 80013d2:	600b      	str	r3, [r1, #0]
 80013d4:	e015      	b.n	8001402 <HAL_RCC_OscConfig+0x1de>
 80013d6:	4b24      	ldr	r3, [pc, #144]	@ (8001468 <HAL_RCC_OscConfig+0x244>)
 80013d8:	2200      	movs	r2, #0
 80013da:	601a      	str	r2, [r3, #0]
 80013dc:	f7ff fc66 	bl	8000cac <HAL_GetTick>
 80013e0:	6138      	str	r0, [r7, #16]
 80013e2:	e008      	b.n	80013f6 <HAL_RCC_OscConfig+0x1d2>
 80013e4:	f7ff fc62 	bl	8000cac <HAL_GetTick>
 80013e8:	4602      	mov	r2, r0
 80013ea:	693b      	ldr	r3, [r7, #16]
 80013ec:	1ad3      	subs	r3, r2, r3
 80013ee:	2b02      	cmp	r3, #2
 80013f0:	d901      	bls.n	80013f6 <HAL_RCC_OscConfig+0x1d2>
 80013f2:	2303      	movs	r3, #3
 80013f4:	e187      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 80013f6:	4b1b      	ldr	r3, [pc, #108]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 80013f8:	681b      	ldr	r3, [r3, #0]
 80013fa:	f003 0302 	and.w	r3, r3, #2
 80013fe:	2b00      	cmp	r3, #0
 8001400:	d1f0      	bne.n	80013e4 <HAL_RCC_OscConfig+0x1c0>
 8001402:	687b      	ldr	r3, [r7, #4]
 8001404:	681b      	ldr	r3, [r3, #0]
 8001406:	f003 0308 	and.w	r3, r3, #8
 800140a:	2b00      	cmp	r3, #0
 800140c:	d036      	beq.n	800147c <HAL_RCC_OscConfig+0x258>
 800140e:	687b      	ldr	r3, [r7, #4]
 8001410:	695b      	ldr	r3, [r3, #20]
 8001412:	2b00      	cmp	r3, #0
 8001414:	d016      	beq.n	8001444 <HAL_RCC_OscConfig+0x220>
 8001416:	4b15      	ldr	r3, [pc, #84]	@ (800146c <HAL_RCC_OscConfig+0x248>)
 8001418:	2201      	movs	r2, #1
 800141a:	601a      	str	r2, [r3, #0]
 800141c:	f7ff fc46 	bl	8000cac <HAL_GetTick>
 8001420:	6138      	str	r0, [r7, #16]
 8001422:	e008      	b.n	8001436 <HAL_RCC_OscConfig+0x212>
 8001424:	f7ff fc42 	bl	8000cac <HAL_GetTick>
 8001428:	4602      	mov	r2, r0
 800142a:	693b      	ldr	r3, [r7, #16]
 800142c:	1ad3      	subs	r3, r2, r3
 800142e:	2b02      	cmp	r3, #2
 8001430:	d901      	bls.n	8001436 <HAL_RCC_OscConfig+0x212>
 8001432:	2303      	movs	r3, #3
 8001434:	e167      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001436:	4b0b      	ldr	r3, [pc, #44]	@ (8001464 <HAL_RCC_OscConfig+0x240>)
 8001438:	6f5b      	ldr	r3, [r3, #116]	@ 0x74
 800143a:	f003 0302 	and.w	r3, r3, #2
 800143e:	2b00      	cmp	r3, #0
 8001440:	d0f0      	beq.n	8001424 <HAL_RCC_OscConfig+0x200>
 8001442:	e01b      	b.n	800147c <HAL_RCC_OscConfig+0x258>
 8001444:	4b09      	ldr	r3, [pc, #36]	@ (800146c <HAL_RCC_OscConfig+0x248>)
 8001446:	2200      	movs	r2, #0
 8001448:	601a      	str	r2, [r3, #0]
 800144a:	f7ff fc2f 	bl	8000cac <HAL_GetTick>
 800144e:	6138      	str	r0, [r7, #16]
 8001450:	e00e      	b.n	8001470 <HAL_RCC_OscConfig+0x24c>
 8001452:	f7ff fc2b 	bl	8000cac <HAL_GetTick>
 8001456:	4602      	mov	r2, r0
 8001458:	693b      	ldr	r3, [r7, #16]
 800145a:	1ad3      	subs	r3, r2, r3
 800145c:	2b02      	cmp	r3, #2
 800145e:	d907      	bls.n	8001470 <HAL_RCC_OscConfig+0x24c>
 8001460:	2303      	movs	r3, #3
 8001462:	e150      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001464:	40023800 	.word	0x40023800
 8001468:	42470000 	.word	0x42470000
 800146c:	42470e80 	.word	0x42470e80
 8001470:	4b88      	ldr	r3, [pc, #544]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001472:	6f5b      	ldr	r3, [r3, #116]	@ 0x74
 8001474:	f003 0302 	and.w	r3, r3, #2
 8001478:	2b00      	cmp	r3, #0
 800147a:	d1ea      	bne.n	8001452 <HAL_RCC_OscConfig+0x22e>
 800147c:	687b      	ldr	r3, [r7, #4]
 800147e:	681b      	ldr	r3, [r3, #0]
 8001480:	f003 0304 	and.w	r3, r3, #4
 8001484:	2b00      	cmp	r3, #0
 8001486:	f000 8097 	beq.w	80015b8 <HAL_RCC_OscConfig+0x394>
 800148a:	2300      	movs	r3, #0
 800148c:	75fb      	strb	r3, [r7, #23]
 800148e:	4b81      	ldr	r3, [pc, #516]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001490:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 8001492:	f003 5380 	and.w	r3, r3, #268435456	@ 0x10000000
 8001496:	2b00      	cmp	r3, #0
 8001498:	d10f      	bne.n	80014ba <HAL_RCC_OscConfig+0x296>
 800149a:	2300      	movs	r3, #0
 800149c:	60bb      	str	r3, [r7, #8]
 800149e:	4b7d      	ldr	r3, [pc, #500]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80014a0:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80014a2:	4a7c      	ldr	r2, [pc, #496]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80014a4:	f043 5380 	orr.w	r3, r3, #268435456	@ 0x10000000
 80014a8:	6413      	str	r3, [r2, #64]	@ 0x40
 80014aa:	4b7a      	ldr	r3, [pc, #488]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80014ac:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80014ae:	f003 5380 	and.w	r3, r3, #268435456	@ 0x10000000
 80014b2:	60bb      	str	r3, [r7, #8]
 80014b4:	68bb      	ldr	r3, [r7, #8]
 80014b6:	2301      	movs	r3, #1
 80014b8:	75fb      	strb	r3, [r7, #23]
 80014ba:	4b77      	ldr	r3, [pc, #476]	@ (8001698 <HAL_RCC_OscConfig+0x474>)
 80014bc:	681b      	ldr	r3, [r3, #0]
 80014be:	f403 7380 	and.w	r3, r3, #256	@ 0x100
 80014c2:	2b00      	cmp	r3, #0
 80014c4:	d118      	bne.n	80014f8 <HAL_RCC_OscConfig+0x2d4>
 80014c6:	4b74      	ldr	r3, [pc, #464]	@ (8001698 <HAL_RCC_OscConfig+0x474>)
 80014c8:	681b      	ldr	r3, [r3, #0]
 80014ca:	4a73      	ldr	r2, [pc, #460]	@ (8001698 <HAL_RCC_OscConfig+0x474>)
 80014cc:	f443 7380 	orr.w	r3, r3, #256	@ 0x100
 80014d0:	6013      	str	r3, [r2, #0]
 80014d2:	f7ff fbeb 	bl	8000cac <HAL_GetTick>
 80014d6:	6138      	str	r0, [r7, #16]
 80014d8:	e008      	b.n	80014ec <HAL_RCC_OscConfig+0x2c8>
 80014da:	f7ff fbe7 	bl	8000cac <HAL_GetTick>
 80014de:	4602      	mov	r2, r0
 80014e0:	693b      	ldr	r3, [r7, #16]
 80014e2:	1ad3      	subs	r3, r2, r3
 80014e4:	2b02      	cmp	r3, #2
 80014e6:	d901      	bls.n	80014ec <HAL_RCC_OscConfig+0x2c8>
 80014e8:	2303      	movs	r3, #3
 80014ea:	e10c      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 80014ec:	4b6a      	ldr	r3, [pc, #424]	@ (8001698 <HAL_RCC_OscConfig+0x474>)
 80014ee:	681b      	ldr	r3, [r3, #0]
 80014f0:	f403 7380 	and.w	r3, r3, #256	@ 0x100
 80014f4:	2b00      	cmp	r3, #0
 80014f6:	d0f0      	beq.n	80014da <HAL_RCC_OscConfig+0x2b6>
 80014f8:	687b      	ldr	r3, [r7, #4]
 80014fa:	689b      	ldr	r3, [r3, #8]
 80014fc:	2b01      	cmp	r3, #1
 80014fe:	d106      	bne.n	800150e <HAL_RCC_OscConfig+0x2ea>
 8001500:	4b64      	ldr	r3, [pc, #400]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001502:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 8001504:	4a63      	ldr	r2, [pc, #396]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001506:	f043 0301 	orr.w	r3, r3, #1
 800150a:	6713      	str	r3, [r2, #112]	@ 0x70
 800150c:	e01c      	b.n	8001548 <HAL_RCC_OscConfig+0x324>
 800150e:	687b      	ldr	r3, [r7, #4]
 8001510:	689b      	ldr	r3, [r3, #8]
 8001512:	2b05      	cmp	r3, #5
 8001514:	d10c      	bne.n	8001530 <HAL_RCC_OscConfig+0x30c>
 8001516:	4b5f      	ldr	r3, [pc, #380]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001518:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 800151a:	4a5e      	ldr	r2, [pc, #376]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 800151c:	f043 0304 	orr.w	r3, r3, #4
 8001520:	6713      	str	r3, [r2, #112]	@ 0x70
 8001522:	4b5c      	ldr	r3, [pc, #368]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001524:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 8001526:	4a5b      	ldr	r2, [pc, #364]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001528:	f043 0301 	orr.w	r3, r3, #1
 800152c:	6713      	str	r3, [r2, #112]	@ 0x70
 800152e:	e00b      	b.n	8001548 <HAL_RCC_OscConfig+0x324>
 8001530:	4b58      	ldr	r3, [pc, #352]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001532:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 8001534:	4a57      	ldr	r2, [pc, #348]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001536:	f023 0301 	bic.w	r3, r3, #1
 800153a:	6713      	str	r3, [r2, #112]	@ 0x70
 800153c:	4b55      	ldr	r3, [pc, #340]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 800153e:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 8001540:	4a54      	ldr	r2, [pc, #336]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001542:	f023 0304 	bic.w	r3, r3, #4
 8001546:	6713      	str	r3, [r2, #112]	@ 0x70
 8001548:	687b      	ldr	r3, [r7, #4]
 800154a:	689b      	ldr	r3, [r3, #8]
 800154c:	2b00      	cmp	r3, #0
 800154e:	d015      	beq.n	800157c <HAL_RCC_OscConfig+0x358>
 8001550:	f7ff fbac 	bl	8000cac <HAL_GetTick>
 8001554:	6138      	str	r0, [r7, #16]
 8001556:	e00a      	b.n	800156e <HAL_RCC_OscConfig+0x34a>
 8001558:	f7ff fba8 	bl	8000cac <HAL_GetTick>
 800155c:	4602      	mov	r2, r0
 800155e:	693b      	ldr	r3, [r7, #16]
 8001560:	1ad3      	subs	r3, r2, r3
 8001562:	f241 3288 	movw	r2, #5000	@ 0x1388
 8001566:	4293      	cmp	r3, r2
 8001568:	d901      	bls.n	800156e <HAL_RCC_OscConfig+0x34a>
 800156a:	2303      	movs	r3, #3
 800156c:	e0cb      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 800156e:	4b49      	ldr	r3, [pc, #292]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001570:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 8001572:	f003 0302 	and.w	r3, r3, #2
 8001576:	2b00      	cmp	r3, #0
 8001578:	d0ee      	beq.n	8001558 <HAL_RCC_OscConfig+0x334>
 800157a:	e014      	b.n	80015a6 <HAL_RCC_OscConfig+0x382>
 800157c:	f7ff fb96 	bl	8000cac <HAL_GetTick>
 8001580:	6138      	str	r0, [r7, #16]
 8001582:	e00a      	b.n	800159a <HAL_RCC_OscConfig+0x376>
 8001584:	f7ff fb92 	bl	8000cac <HAL_GetTick>
 8001588:	4602      	mov	r2, r0
 800158a:	693b      	ldr	r3, [r7, #16]
 800158c:	1ad3      	subs	r3, r2, r3
 800158e:	f241 3288 	movw	r2, #5000	@ 0x1388
 8001592:	4293      	cmp	r3, r2
 8001594:	d901      	bls.n	800159a <HAL_RCC_OscConfig+0x376>
 8001596:	2303      	movs	r3, #3
 8001598:	e0b5      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 800159a:	4b3e      	ldr	r3, [pc, #248]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 800159c:	6f1b      	ldr	r3, [r3, #112]	@ 0x70
 800159e:	f003 0302 	and.w	r3, r3, #2
 80015a2:	2b00      	cmp	r3, #0
 80015a4:	d1ee      	bne.n	8001584 <HAL_RCC_OscConfig+0x360>
 80015a6:	7dfb      	ldrb	r3, [r7, #23]
 80015a8:	2b01      	cmp	r3, #1
 80015aa:	d105      	bne.n	80015b8 <HAL_RCC_OscConfig+0x394>
 80015ac:	4b39      	ldr	r3, [pc, #228]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80015ae:	6c1b      	ldr	r3, [r3, #64]	@ 0x40
 80015b0:	4a38      	ldr	r2, [pc, #224]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80015b2:	f023 5380 	bic.w	r3, r3, #268435456	@ 0x10000000
 80015b6:	6413      	str	r3, [r2, #64]	@ 0x40
 80015b8:	687b      	ldr	r3, [r7, #4]
 80015ba:	699b      	ldr	r3, [r3, #24]
 80015bc:	2b00      	cmp	r3, #0
 80015be:	f000 80a1 	beq.w	8001704 <HAL_RCC_OscConfig+0x4e0>
 80015c2:	4b34      	ldr	r3, [pc, #208]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80015c4:	689b      	ldr	r3, [r3, #8]
 80015c6:	f003 030c 	and.w	r3, r3, #12
 80015ca:	2b08      	cmp	r3, #8
 80015cc:	d05c      	beq.n	8001688 <HAL_RCC_OscConfig+0x464>
 80015ce:	687b      	ldr	r3, [r7, #4]
 80015d0:	699b      	ldr	r3, [r3, #24]
 80015d2:	2b02      	cmp	r3, #2
 80015d4:	d141      	bne.n	800165a <HAL_RCC_OscConfig+0x436>
 80015d6:	4b31      	ldr	r3, [pc, #196]	@ (800169c <HAL_RCC_OscConfig+0x478>)
 80015d8:	2200      	movs	r2, #0
 80015da:	601a      	str	r2, [r3, #0]
 80015dc:	f7ff fb66 	bl	8000cac <HAL_GetTick>
 80015e0:	6138      	str	r0, [r7, #16]
 80015e2:	e008      	b.n	80015f6 <HAL_RCC_OscConfig+0x3d2>
 80015e4:	f7ff fb62 	bl	8000cac <HAL_GetTick>
 80015e8:	4602      	mov	r2, r0
 80015ea:	693b      	ldr	r3, [r7, #16]
 80015ec:	1ad3      	subs	r3, r2, r3
 80015ee:	2b02      	cmp	r3, #2
 80015f0:	d901      	bls.n	80015f6 <HAL_RCC_OscConfig+0x3d2>
 80015f2:	2303      	movs	r3, #3
 80015f4:	e087      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 80015f6:	4b27      	ldr	r3, [pc, #156]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 80015f8:	681b      	ldr	r3, [r3, #0]
 80015fa:	f003 7300 	and.w	r3, r3, #33554432	@ 0x2000000
 80015fe:	2b00      	cmp	r3, #0
 8001600:	d1f0      	bne.n	80015e4 <HAL_RCC_OscConfig+0x3c0>
 8001602:	687b      	ldr	r3, [r7, #4]
 8001604:	69da      	ldr	r2, [r3, #28]
 8001606:	687b      	ldr	r3, [r7, #4]
 8001608:	6a1b      	ldr	r3, [r3, #32]
 800160a:	431a      	orrs	r2, r3
 800160c:	687b      	ldr	r3, [r7, #4]
 800160e:	6a5b      	ldr	r3, [r3, #36]	@ 0x24
 8001610:	019b      	lsls	r3, r3, #6
 8001612:	431a      	orrs	r2, r3
 8001614:	687b      	ldr	r3, [r7, #4]
 8001616:	6a9b      	ldr	r3, [r3, #40]	@ 0x28
 8001618:	085b      	lsrs	r3, r3, #1
 800161a:	3b01      	subs	r3, #1
 800161c:	041b      	lsls	r3, r3, #16
 800161e:	431a      	orrs	r2, r3
 8001620:	687b      	ldr	r3, [r7, #4]
 8001622:	6adb      	ldr	r3, [r3, #44]	@ 0x2c
 8001624:	061b      	lsls	r3, r3, #24
 8001626:	491b      	ldr	r1, [pc, #108]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 8001628:	4313      	orrs	r3, r2
 800162a:	604b      	str	r3, [r1, #4]
 800162c:	4b1b      	ldr	r3, [pc, #108]	@ (800169c <HAL_RCC_OscConfig+0x478>)
 800162e:	2201      	movs	r2, #1
 8001630:	601a      	str	r2, [r3, #0]
 8001632:	f7ff fb3b 	bl	8000cac <HAL_GetTick>
 8001636:	6138      	str	r0, [r7, #16]
 8001638:	e008      	b.n	800164c <HAL_RCC_OscConfig+0x428>
 800163a:	f7ff fb37 	bl	8000cac <HAL_GetTick>
 800163e:	4602      	mov	r2, r0
 8001640:	693b      	ldr	r3, [r7, #16]
 8001642:	1ad3      	subs	r3, r2, r3
 8001644:	2b02      	cmp	r3, #2
 8001646:	d901      	bls.n	800164c <HAL_RCC_OscConfig+0x428>
 8001648:	2303      	movs	r3, #3
 800164a:	e05c      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 800164c:	4b11      	ldr	r3, [pc, #68]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 800164e:	681b      	ldr	r3, [r3, #0]
 8001650:	f003 7300 	and.w	r3, r3, #33554432	@ 0x2000000
 8001654:	2b00      	cmp	r3, #0
 8001656:	d0f0      	beq.n	800163a <HAL_RCC_OscConfig+0x416>
 8001658:	e054      	b.n	8001704 <HAL_RCC_OscConfig+0x4e0>
 800165a:	4b10      	ldr	r3, [pc, #64]	@ (800169c <HAL_RCC_OscConfig+0x478>)
 800165c:	2200      	movs	r2, #0
 800165e:	601a      	str	r2, [r3, #0]
 8001660:	f7ff fb24 	bl	8000cac <HAL_GetTick>
 8001664:	6138      	str	r0, [r7, #16]
 8001666:	e008      	b.n	800167a <HAL_RCC_OscConfig+0x456>
 8001668:	f7ff fb20 	bl	8000cac <HAL_GetTick>
 800166c:	4602      	mov	r2, r0
 800166e:	693b      	ldr	r3, [r7, #16]
 8001670:	1ad3      	subs	r3, r2, r3
 8001672:	2b02      	cmp	r3, #2
 8001674:	d901      	bls.n	800167a <HAL_RCC_OscConfig+0x456>
 8001676:	2303      	movs	r3, #3
 8001678:	e045      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 800167a:	4b06      	ldr	r3, [pc, #24]	@ (8001694 <HAL_RCC_OscConfig+0x470>)
 800167c:	681b      	ldr	r3, [r3, #0]
 800167e:	f003 7300 	and.w	r3, r3, #33554432	@ 0x2000000
 8001682:	2b00      	cmp	r3, #0
 8001684:	d1f0      	bne.n	8001668 <HAL_RCC_OscConfig+0x444>
 8001686:	e03d      	b.n	8001704 <HAL_RCC_OscConfig+0x4e0>
 8001688:	687b      	ldr	r3, [r7, #4]
 800168a:	699b      	ldr	r3, [r3, #24]
 800168c:	2b01      	cmp	r3, #1
 800168e:	d107      	bne.n	80016a0 <HAL_RCC_OscConfig+0x47c>
 8001690:	2301      	movs	r3, #1
 8001692:	e038      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001694:	40023800 	.word	0x40023800
 8001698:	40007000 	.word	0x40007000
 800169c:	42470060 	.word	0x42470060
 80016a0:	4b1b      	ldr	r3, [pc, #108]	@ (8001710 <HAL_RCC_OscConfig+0x4ec>)
 80016a2:	685b      	ldr	r3, [r3, #4]
 80016a4:	60fb      	str	r3, [r7, #12]
 80016a6:	687b      	ldr	r3, [r7, #4]
 80016a8:	699b      	ldr	r3, [r3, #24]
 80016aa:	2b01      	cmp	r3, #1
 80016ac:	d028      	beq.n	8001700 <HAL_RCC_OscConfig+0x4dc>
 80016ae:	68fb      	ldr	r3, [r7, #12]
 80016b0:	f403 0280 	and.w	r2, r3, #4194304	@ 0x400000
 80016b4:	687b      	ldr	r3, [r7, #4]
 80016b6:	69db      	ldr	r3, [r3, #28]
 80016b8:	429a      	cmp	r2, r3
 80016ba:	d121      	bne.n	8001700 <HAL_RCC_OscConfig+0x4dc>
 80016bc:	68fb      	ldr	r3, [r7, #12]
 80016be:	f003 023f 	and.w	r2, r3, #63	@ 0x3f
 80016c2:	687b      	ldr	r3, [r7, #4]
 80016c4:	6a1b      	ldr	r3, [r3, #32]
 80016c6:	429a      	cmp	r2, r3
 80016c8:	d11a      	bne.n	8001700 <HAL_RCC_OscConfig+0x4dc>
 80016ca:	68fa      	ldr	r2, [r7, #12]
 80016cc:	f647 73c0 	movw	r3, #32704	@ 0x7fc0
 80016d0:	4013      	ands	r3, r2
 80016d2:	687a      	ldr	r2, [r7, #4]
 80016d4:	6a52      	ldr	r2, [r2, #36]	@ 0x24
 80016d6:	0192      	lsls	r2, r2, #6
 80016d8:	4293      	cmp	r3, r2
 80016da:	d111      	bne.n	8001700 <HAL_RCC_OscConfig+0x4dc>
 80016dc:	68fb      	ldr	r3, [r7, #12]
 80016de:	f403 3240 	and.w	r2, r3, #196608	@ 0x30000
 80016e2:	687b      	ldr	r3, [r7, #4]
 80016e4:	6a9b      	ldr	r3, [r3, #40]	@ 0x28
 80016e6:	085b      	lsrs	r3, r3, #1
 80016e8:	3b01      	subs	r3, #1
 80016ea:	041b      	lsls	r3, r3, #16
 80016ec:	429a      	cmp	r2, r3
 80016ee:	d107      	bne.n	8001700 <HAL_RCC_OscConfig+0x4dc>
 80016f0:	68fb      	ldr	r3, [r7, #12]
 80016f2:	f003 6270 	and.w	r2, r3, #251658240	@ 0xf000000
 80016f6:	687b      	ldr	r3, [r7, #4]
 80016f8:	6adb      	ldr	r3, [r3, #44]	@ 0x2c
 80016fa:	061b      	lsls	r3, r3, #24
 80016fc:	429a      	cmp	r2, r3
 80016fe:	d001      	beq.n	8001704 <HAL_RCC_OscConfig+0x4e0>
 8001700:	2301      	movs	r3, #1
 8001702:	e000      	b.n	8001706 <HAL_RCC_OscConfig+0x4e2>
 8001704:	2300      	movs	r3, #0
 8001706:	4618      	mov	r0, r3
 8001708:	3718      	adds	r7, #24
 800170a:	46bd      	mov	sp, r7
 800170c:	bd80      	pop	{r7, pc}
 800170e:	bf00      	nop
 8001710:	40023800 	.word	0x40023800

08001714 <HAL_RCC_ClockConfig>:
 8001714:	b580      	push	{r7, lr}
 8001716:	b084      	sub	sp, #16
 8001718:	af00      	add	r7, sp, #0
 800171a:	6078      	str	r0, [r7, #4]
 800171c:	6039      	str	r1, [r7, #0]
 800171e:	687b      	ldr	r3, [r7, #4]
 8001720:	2b00      	cmp	r3, #0
 8001722:	d101      	bne.n	8001728 <HAL_RCC_ClockConfig+0x14>
 8001724:	2301      	movs	r3, #1
 8001726:	e0cc      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 8001728:	4b68      	ldr	r3, [pc, #416]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 800172a:	681b      	ldr	r3, [r3, #0]
 800172c:	f003 0307 	and.w	r3, r3, #7
 8001730:	683a      	ldr	r2, [r7, #0]
 8001732:	429a      	cmp	r2, r3
 8001734:	d90c      	bls.n	8001750 <HAL_RCC_ClockConfig+0x3c>
 8001736:	4b65      	ldr	r3, [pc, #404]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 8001738:	683a      	ldr	r2, [r7, #0]
 800173a:	b2d2      	uxtb	r2, r2
 800173c:	701a      	strb	r2, [r3, #0]
 800173e:	4b63      	ldr	r3, [pc, #396]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 8001740:	681b      	ldr	r3, [r3, #0]
 8001742:	f003 0307 	and.w	r3, r3, #7
 8001746:	683a      	ldr	r2, [r7, #0]
 8001748:	429a      	cmp	r2, r3
 800174a:	d001      	beq.n	8001750 <HAL_RCC_ClockConfig+0x3c>
 800174c:	2301      	movs	r3, #1
 800174e:	e0b8      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 8001750:	687b      	ldr	r3, [r7, #4]
 8001752:	681b      	ldr	r3, [r3, #0]
 8001754:	f003 0302 	and.w	r3, r3, #2
 8001758:	2b00      	cmp	r3, #0
 800175a:	d020      	beq.n	800179e <HAL_RCC_ClockConfig+0x8a>
 800175c:	687b      	ldr	r3, [r7, #4]
 800175e:	681b      	ldr	r3, [r3, #0]
 8001760:	f003 0304 	and.w	r3, r3, #4
 8001764:	2b00      	cmp	r3, #0
 8001766:	d005      	beq.n	8001774 <HAL_RCC_ClockConfig+0x60>
 8001768:	4b59      	ldr	r3, [pc, #356]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 800176a:	689b      	ldr	r3, [r3, #8]
 800176c:	4a58      	ldr	r2, [pc, #352]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 800176e:	f443 53e0 	orr.w	r3, r3, #7168	@ 0x1c00
 8001772:	6093      	str	r3, [r2, #8]
 8001774:	687b      	ldr	r3, [r7, #4]
 8001776:	681b      	ldr	r3, [r3, #0]
 8001778:	f003 0308 	and.w	r3, r3, #8
 800177c:	2b00      	cmp	r3, #0
 800177e:	d005      	beq.n	800178c <HAL_RCC_ClockConfig+0x78>
 8001780:	4b53      	ldr	r3, [pc, #332]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001782:	689b      	ldr	r3, [r3, #8]
 8001784:	4a52      	ldr	r2, [pc, #328]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001786:	f443 4360 	orr.w	r3, r3, #57344	@ 0xe000
 800178a:	6093      	str	r3, [r2, #8]
 800178c:	4b50      	ldr	r3, [pc, #320]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 800178e:	689b      	ldr	r3, [r3, #8]
 8001790:	f023 02f0 	bic.w	r2, r3, #240	@ 0xf0
 8001794:	687b      	ldr	r3, [r7, #4]
 8001796:	689b      	ldr	r3, [r3, #8]
 8001798:	494d      	ldr	r1, [pc, #308]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 800179a:	4313      	orrs	r3, r2
 800179c:	608b      	str	r3, [r1, #8]
 800179e:	687b      	ldr	r3, [r7, #4]
 80017a0:	681b      	ldr	r3, [r3, #0]
 80017a2:	f003 0301 	and.w	r3, r3, #1
 80017a6:	2b00      	cmp	r3, #0
 80017a8:	d044      	beq.n	8001834 <HAL_RCC_ClockConfig+0x120>
 80017aa:	687b      	ldr	r3, [r7, #4]
 80017ac:	685b      	ldr	r3, [r3, #4]
 80017ae:	2b01      	cmp	r3, #1
 80017b0:	d107      	bne.n	80017c2 <HAL_RCC_ClockConfig+0xae>
 80017b2:	4b47      	ldr	r3, [pc, #284]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 80017b4:	681b      	ldr	r3, [r3, #0]
 80017b6:	f403 3300 	and.w	r3, r3, #131072	@ 0x20000
 80017ba:	2b00      	cmp	r3, #0
 80017bc:	d119      	bne.n	80017f2 <HAL_RCC_ClockConfig+0xde>
 80017be:	2301      	movs	r3, #1
 80017c0:	e07f      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 80017c2:	687b      	ldr	r3, [r7, #4]
 80017c4:	685b      	ldr	r3, [r3, #4]
 80017c6:	2b02      	cmp	r3, #2
 80017c8:	d003      	beq.n	80017d2 <HAL_RCC_ClockConfig+0xbe>
 80017ca:	687b      	ldr	r3, [r7, #4]
 80017cc:	685b      	ldr	r3, [r3, #4]
 80017ce:	2b03      	cmp	r3, #3
 80017d0:	d107      	bne.n	80017e2 <HAL_RCC_ClockConfig+0xce>
 80017d2:	4b3f      	ldr	r3, [pc, #252]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 80017d4:	681b      	ldr	r3, [r3, #0]
 80017d6:	f003 7300 	and.w	r3, r3, #33554432	@ 0x2000000
 80017da:	2b00      	cmp	r3, #0
 80017dc:	d109      	bne.n	80017f2 <HAL_RCC_ClockConfig+0xde>
 80017de:	2301      	movs	r3, #1
 80017e0:	e06f      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 80017e2:	4b3b      	ldr	r3, [pc, #236]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 80017e4:	681b      	ldr	r3, [r3, #0]
 80017e6:	f003 0302 	and.w	r3, r3, #2
 80017ea:	2b00      	cmp	r3, #0
 80017ec:	d101      	bne.n	80017f2 <HAL_RCC_ClockConfig+0xde>
 80017ee:	2301      	movs	r3, #1
 80017f0:	e067      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 80017f2:	4b37      	ldr	r3, [pc, #220]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 80017f4:	689b      	ldr	r3, [r3, #8]
 80017f6:	f023 0203 	bic.w	r2, r3, #3
 80017fa:	687b      	ldr	r3, [r7, #4]
 80017fc:	685b      	ldr	r3, [r3, #4]
 80017fe:	4934      	ldr	r1, [pc, #208]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001800:	4313      	orrs	r3, r2
 8001802:	608b      	str	r3, [r1, #8]
 8001804:	f7ff fa52 	bl	8000cac <HAL_GetTick>
 8001808:	60f8      	str	r0, [r7, #12]
 800180a:	e00a      	b.n	8001822 <HAL_RCC_ClockConfig+0x10e>
 800180c:	f7ff fa4e 	bl	8000cac <HAL_GetTick>
 8001810:	4602      	mov	r2, r0
 8001812:	68fb      	ldr	r3, [r7, #12]
 8001814:	1ad3      	subs	r3, r2, r3
 8001816:	f241 3288 	movw	r2, #5000	@ 0x1388
 800181a:	4293      	cmp	r3, r2
 800181c:	d901      	bls.n	8001822 <HAL_RCC_ClockConfig+0x10e>
 800181e:	2303      	movs	r3, #3
 8001820:	e04f      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 8001822:	4b2b      	ldr	r3, [pc, #172]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001824:	689b      	ldr	r3, [r3, #8]
 8001826:	f003 020c 	and.w	r2, r3, #12
 800182a:	687b      	ldr	r3, [r7, #4]
 800182c:	685b      	ldr	r3, [r3, #4]
 800182e:	009b      	lsls	r3, r3, #2
 8001830:	429a      	cmp	r2, r3
 8001832:	d1eb      	bne.n	800180c <HAL_RCC_ClockConfig+0xf8>
 8001834:	4b25      	ldr	r3, [pc, #148]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 8001836:	681b      	ldr	r3, [r3, #0]
 8001838:	f003 0307 	and.w	r3, r3, #7
 800183c:	683a      	ldr	r2, [r7, #0]
 800183e:	429a      	cmp	r2, r3
 8001840:	d20c      	bcs.n	800185c <HAL_RCC_ClockConfig+0x148>
 8001842:	4b22      	ldr	r3, [pc, #136]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 8001844:	683a      	ldr	r2, [r7, #0]
 8001846:	b2d2      	uxtb	r2, r2
 8001848:	701a      	strb	r2, [r3, #0]
 800184a:	4b20      	ldr	r3, [pc, #128]	@ (80018cc <HAL_RCC_ClockConfig+0x1b8>)
 800184c:	681b      	ldr	r3, [r3, #0]
 800184e:	f003 0307 	and.w	r3, r3, #7
 8001852:	683a      	ldr	r2, [r7, #0]
 8001854:	429a      	cmp	r2, r3
 8001856:	d001      	beq.n	800185c <HAL_RCC_ClockConfig+0x148>
 8001858:	2301      	movs	r3, #1
 800185a:	e032      	b.n	80018c2 <HAL_RCC_ClockConfig+0x1ae>
 800185c:	687b      	ldr	r3, [r7, #4]
 800185e:	681b      	ldr	r3, [r3, #0]
 8001860:	f003 0304 	and.w	r3, r3, #4
 8001864:	2b00      	cmp	r3, #0
 8001866:	d008      	beq.n	800187a <HAL_RCC_ClockConfig+0x166>
 8001868:	4b19      	ldr	r3, [pc, #100]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 800186a:	689b      	ldr	r3, [r3, #8]
 800186c:	f423 52e0 	bic.w	r2, r3, #7168	@ 0x1c00
 8001870:	687b      	ldr	r3, [r7, #4]
 8001872:	68db      	ldr	r3, [r3, #12]
 8001874:	4916      	ldr	r1, [pc, #88]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001876:	4313      	orrs	r3, r2
 8001878:	608b      	str	r3, [r1, #8]
 800187a:	687b      	ldr	r3, [r7, #4]
 800187c:	681b      	ldr	r3, [r3, #0]
 800187e:	f003 0308 	and.w	r3, r3, #8
 8001882:	2b00      	cmp	r3, #0
 8001884:	d009      	beq.n	800189a <HAL_RCC_ClockConfig+0x186>
 8001886:	4b12      	ldr	r3, [pc, #72]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001888:	689b      	ldr	r3, [r3, #8]
 800188a:	f423 4260 	bic.w	r2, r3, #57344	@ 0xe000
 800188e:	687b      	ldr	r3, [r7, #4]
 8001890:	691b      	ldr	r3, [r3, #16]
 8001892:	00db      	lsls	r3, r3, #3
 8001894:	490e      	ldr	r1, [pc, #56]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 8001896:	4313      	orrs	r3, r2
 8001898:	608b      	str	r3, [r1, #8]
 800189a:	f000 f821 	bl	80018e0 <HAL_RCC_GetSysClockFreq>
 800189e:	4602      	mov	r2, r0
 80018a0:	4b0b      	ldr	r3, [pc, #44]	@ (80018d0 <HAL_RCC_ClockConfig+0x1bc>)
 80018a2:	689b      	ldr	r3, [r3, #8]
 80018a4:	091b      	lsrs	r3, r3, #4
 80018a6:	f003 030f 	and.w	r3, r3, #15
 80018aa:	490a      	ldr	r1, [pc, #40]	@ (80018d4 <HAL_RCC_ClockConfig+0x1c0>)
 80018ac:	5ccb      	ldrb	r3, [r1, r3]
 80018ae:	fa22 f303 	lsr.w	r3, r2, r3
 80018b2:	4a09      	ldr	r2, [pc, #36]	@ (80018d8 <HAL_RCC_ClockConfig+0x1c4>)
 80018b4:	6013      	str	r3, [r2, #0]
 80018b6:	4b09      	ldr	r3, [pc, #36]	@ (80018dc <HAL_RCC_ClockConfig+0x1c8>)
 80018b8:	681b      	ldr	r3, [r3, #0]
 80018ba:	4618      	mov	r0, r3
 80018bc:	f7ff f9b2 	bl	8000c24 <HAL_InitTick>
 80018c0:	2300      	movs	r3, #0
 80018c2:	4618      	mov	r0, r3
 80018c4:	3710      	adds	r7, #16
 80018c6:	46bd      	mov	sp, r7
 80018c8:	bd80      	pop	{r7, pc}
 80018ca:	bf00      	nop
 80018cc:	40023c00 	.word	0x40023c00
 80018d0:	40023800 	.word	0x40023800
 80018d4:	080023d0 	.word	0x080023d0
 80018d8:	20000000 	.word	0x20000000
 80018dc:	20000064 	.word	0x20000064

080018e0 <HAL_RCC_GetSysClockFreq>:
 80018e0:	e92d 4fb0 	stmdb	sp!, {r4, r5, r7, r8, r9, sl, fp, lr}
 80018e4:	b094      	sub	sp, #80	@ 0x50
 80018e6:	af00      	add	r7, sp, #0
 80018e8:	2300      	movs	r3, #0
 80018ea:	647b      	str	r3, [r7, #68]	@ 0x44
 80018ec:	2300      	movs	r3, #0
 80018ee:	64fb      	str	r3, [r7, #76]	@ 0x4c
 80018f0:	2300      	movs	r3, #0
 80018f2:	643b      	str	r3, [r7, #64]	@ 0x40
 80018f4:	2300      	movs	r3, #0
 80018f6:	64bb      	str	r3, [r7, #72]	@ 0x48
 80018f8:	4b79      	ldr	r3, [pc, #484]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 80018fa:	689b      	ldr	r3, [r3, #8]
 80018fc:	f003 030c 	and.w	r3, r3, #12
 8001900:	2b08      	cmp	r3, #8
 8001902:	d00d      	beq.n	8001920 <HAL_RCC_GetSysClockFreq+0x40>
 8001904:	2b08      	cmp	r3, #8
 8001906:	f200 80e1 	bhi.w	8001acc <HAL_RCC_GetSysClockFreq+0x1ec>
 800190a:	2b00      	cmp	r3, #0
 800190c:	d002      	beq.n	8001914 <HAL_RCC_GetSysClockFreq+0x34>
 800190e:	2b04      	cmp	r3, #4
 8001910:	d003      	beq.n	800191a <HAL_RCC_GetSysClockFreq+0x3a>
 8001912:	e0db      	b.n	8001acc <HAL_RCC_GetSysClockFreq+0x1ec>
 8001914:	4b73      	ldr	r3, [pc, #460]	@ (8001ae4 <HAL_RCC_GetSysClockFreq+0x204>)
 8001916:	64bb      	str	r3, [r7, #72]	@ 0x48
 8001918:	e0db      	b.n	8001ad2 <HAL_RCC_GetSysClockFreq+0x1f2>
 800191a:	4b73      	ldr	r3, [pc, #460]	@ (8001ae8 <HAL_RCC_GetSysClockFreq+0x208>)
 800191c:	64bb      	str	r3, [r7, #72]	@ 0x48
 800191e:	e0d8      	b.n	8001ad2 <HAL_RCC_GetSysClockFreq+0x1f2>
 8001920:	4b6f      	ldr	r3, [pc, #444]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 8001922:	685b      	ldr	r3, [r3, #4]
 8001924:	f003 033f 	and.w	r3, r3, #63	@ 0x3f
 8001928:	647b      	str	r3, [r7, #68]	@ 0x44
 800192a:	4b6d      	ldr	r3, [pc, #436]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 800192c:	685b      	ldr	r3, [r3, #4]
 800192e:	f403 0380 	and.w	r3, r3, #4194304	@ 0x400000
 8001932:	2b00      	cmp	r3, #0
 8001934:	d063      	beq.n	80019fe <HAL_RCC_GetSysClockFreq+0x11e>
 8001936:	4b6a      	ldr	r3, [pc, #424]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 8001938:	685b      	ldr	r3, [r3, #4]
 800193a:	099b      	lsrs	r3, r3, #6
 800193c:	2200      	movs	r2, #0
 800193e:	63bb      	str	r3, [r7, #56]	@ 0x38
 8001940:	63fa      	str	r2, [r7, #60]	@ 0x3c
 8001942:	6bbb      	ldr	r3, [r7, #56]	@ 0x38
 8001944:	f3c3 0308 	ubfx	r3, r3, #0, #9
 8001948:	633b      	str	r3, [r7, #48]	@ 0x30
 800194a:	2300      	movs	r3, #0
 800194c:	637b      	str	r3, [r7, #52]	@ 0x34
 800194e:	e9d7 450c 	ldrd	r4, r5, [r7, #48]	@ 0x30
 8001952:	4622      	mov	r2, r4
 8001954:	462b      	mov	r3, r5
 8001956:	f04f 0000 	mov.w	r0, #0
 800195a:	f04f 0100 	mov.w	r1, #0
 800195e:	0159      	lsls	r1, r3, #5
 8001960:	ea41 61d2 	orr.w	r1, r1, r2, lsr #27
 8001964:	0150      	lsls	r0, r2, #5
 8001966:	4602      	mov	r2, r0
 8001968:	460b      	mov	r3, r1
 800196a:	4621      	mov	r1, r4
 800196c:	1a51      	subs	r1, r2, r1
 800196e:	6139      	str	r1, [r7, #16]
 8001970:	4629      	mov	r1, r5
 8001972:	eb63 0301 	sbc.w	r3, r3, r1
 8001976:	617b      	str	r3, [r7, #20]
 8001978:	f04f 0200 	mov.w	r2, #0
 800197c:	f04f 0300 	mov.w	r3, #0
 8001980:	e9d7 ab04 	ldrd	sl, fp, [r7, #16]
 8001984:	4659      	mov	r1, fp
 8001986:	018b      	lsls	r3, r1, #6
 8001988:	4651      	mov	r1, sl
 800198a:	ea43 6391 	orr.w	r3, r3, r1, lsr #26
 800198e:	4651      	mov	r1, sl
 8001990:	018a      	lsls	r2, r1, #6
 8001992:	4651      	mov	r1, sl
 8001994:	ebb2 0801 	subs.w	r8, r2, r1
 8001998:	4659      	mov	r1, fp
 800199a:	eb63 0901 	sbc.w	r9, r3, r1
 800199e:	f04f 0200 	mov.w	r2, #0
 80019a2:	f04f 0300 	mov.w	r3, #0
 80019a6:	ea4f 03c9 	mov.w	r3, r9, lsl #3
 80019aa:	ea43 7358 	orr.w	r3, r3, r8, lsr #29
 80019ae:	ea4f 02c8 	mov.w	r2, r8, lsl #3
 80019b2:	4690      	mov	r8, r2
 80019b4:	4699      	mov	r9, r3
 80019b6:	4623      	mov	r3, r4
 80019b8:	eb18 0303 	adds.w	r3, r8, r3
 80019bc:	60bb      	str	r3, [r7, #8]
 80019be:	462b      	mov	r3, r5
 80019c0:	eb49 0303 	adc.w	r3, r9, r3
 80019c4:	60fb      	str	r3, [r7, #12]
 80019c6:	f04f 0200 	mov.w	r2, #0
 80019ca:	f04f 0300 	mov.w	r3, #0
 80019ce:	e9d7 4502 	ldrd	r4, r5, [r7, #8]
 80019d2:	4629      	mov	r1, r5
 80019d4:	024b      	lsls	r3, r1, #9
 80019d6:	4621      	mov	r1, r4
 80019d8:	ea43 53d1 	orr.w	r3, r3, r1, lsr #23
 80019dc:	4621      	mov	r1, r4
 80019de:	024a      	lsls	r2, r1, #9
 80019e0:	4610      	mov	r0, r2
 80019e2:	4619      	mov	r1, r3
 80019e4:	6c7b      	ldr	r3, [r7, #68]	@ 0x44
 80019e6:	2200      	movs	r2, #0
 80019e8:	62bb      	str	r3, [r7, #40]	@ 0x28
 80019ea:	62fa      	str	r2, [r7, #44]	@ 0x2c
 80019ec:	e9d7 230a 	ldrd	r2, r3, [r7, #40]	@ 0x28
 80019f0:	f7fe fbf2 	bl	80001d8 <__aeabi_uldivmod>
 80019f4:	4602      	mov	r2, r0
 80019f6:	460b      	mov	r3, r1
 80019f8:	4613      	mov	r3, r2
 80019fa:	64fb      	str	r3, [r7, #76]	@ 0x4c
 80019fc:	e058      	b.n	8001ab0 <HAL_RCC_GetSysClockFreq+0x1d0>
 80019fe:	4b38      	ldr	r3, [pc, #224]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 8001a00:	685b      	ldr	r3, [r3, #4]
 8001a02:	099b      	lsrs	r3, r3, #6
 8001a04:	2200      	movs	r2, #0
 8001a06:	4618      	mov	r0, r3
 8001a08:	4611      	mov	r1, r2
 8001a0a:	f3c0 0308 	ubfx	r3, r0, #0, #9
 8001a0e:	623b      	str	r3, [r7, #32]
 8001a10:	2300      	movs	r3, #0
 8001a12:	627b      	str	r3, [r7, #36]	@ 0x24
 8001a14:	e9d7 8908 	ldrd	r8, r9, [r7, #32]
 8001a18:	4642      	mov	r2, r8
 8001a1a:	464b      	mov	r3, r9
 8001a1c:	f04f 0000 	mov.w	r0, #0
 8001a20:	f04f 0100 	mov.w	r1, #0
 8001a24:	0159      	lsls	r1, r3, #5
 8001a26:	ea41 61d2 	orr.w	r1, r1, r2, lsr #27
 8001a2a:	0150      	lsls	r0, r2, #5
 8001a2c:	4602      	mov	r2, r0
 8001a2e:	460b      	mov	r3, r1
 8001a30:	4641      	mov	r1, r8
 8001a32:	ebb2 0a01 	subs.w	sl, r2, r1
 8001a36:	4649      	mov	r1, r9
 8001a38:	eb63 0b01 	sbc.w	fp, r3, r1
 8001a3c:	f04f 0200 	mov.w	r2, #0
 8001a40:	f04f 0300 	mov.w	r3, #0
 8001a44:	ea4f 138b 	mov.w	r3, fp, lsl #6
 8001a48:	ea43 639a 	orr.w	r3, r3, sl, lsr #26
 8001a4c:	ea4f 128a 	mov.w	r2, sl, lsl #6
 8001a50:	ebb2 040a 	subs.w	r4, r2, sl
 8001a54:	eb63 050b 	sbc.w	r5, r3, fp
 8001a58:	f04f 0200 	mov.w	r2, #0
 8001a5c:	f04f 0300 	mov.w	r3, #0
 8001a60:	00eb      	lsls	r3, r5, #3
 8001a62:	ea43 7354 	orr.w	r3, r3, r4, lsr #29
 8001a66:	00e2      	lsls	r2, r4, #3
 8001a68:	4614      	mov	r4, r2
 8001a6a:	461d      	mov	r5, r3
 8001a6c:	4643      	mov	r3, r8
 8001a6e:	18e3      	adds	r3, r4, r3
 8001a70:	603b      	str	r3, [r7, #0]
 8001a72:	464b      	mov	r3, r9
 8001a74:	eb45 0303 	adc.w	r3, r5, r3
 8001a78:	607b      	str	r3, [r7, #4]
 8001a7a:	f04f 0200 	mov.w	r2, #0
 8001a7e:	f04f 0300 	mov.w	r3, #0
 8001a82:	e9d7 4500 	ldrd	r4, r5, [r7]
 8001a86:	4629      	mov	r1, r5
 8001a88:	028b      	lsls	r3, r1, #10
 8001a8a:	4621      	mov	r1, r4
 8001a8c:	ea43 5391 	orr.w	r3, r3, r1, lsr #22
 8001a90:	4621      	mov	r1, r4
 8001a92:	028a      	lsls	r2, r1, #10
 8001a94:	4610      	mov	r0, r2
 8001a96:	4619      	mov	r1, r3
 8001a98:	6c7b      	ldr	r3, [r7, #68]	@ 0x44
 8001a9a:	2200      	movs	r2, #0
 8001a9c:	61bb      	str	r3, [r7, #24]
 8001a9e:	61fa      	str	r2, [r7, #28]
 8001aa0:	e9d7 2306 	ldrd	r2, r3, [r7, #24]
 8001aa4:	f7fe fb98 	bl	80001d8 <__aeabi_uldivmod>
 8001aa8:	4602      	mov	r2, r0
 8001aaa:	460b      	mov	r3, r1
 8001aac:	4613      	mov	r3, r2
 8001aae:	64fb      	str	r3, [r7, #76]	@ 0x4c
 8001ab0:	4b0b      	ldr	r3, [pc, #44]	@ (8001ae0 <HAL_RCC_GetSysClockFreq+0x200>)
 8001ab2:	685b      	ldr	r3, [r3, #4]
 8001ab4:	0c1b      	lsrs	r3, r3, #16
 8001ab6:	f003 0303 	and.w	r3, r3, #3
 8001aba:	3301      	adds	r3, #1
 8001abc:	005b      	lsls	r3, r3, #1
 8001abe:	643b      	str	r3, [r7, #64]	@ 0x40
 8001ac0:	6cfa      	ldr	r2, [r7, #76]	@ 0x4c
 8001ac2:	6c3b      	ldr	r3, [r7, #64]	@ 0x40
 8001ac4:	fbb2 f3f3 	udiv	r3, r2, r3
 8001ac8:	64bb      	str	r3, [r7, #72]	@ 0x48
 8001aca:	e002      	b.n	8001ad2 <HAL_RCC_GetSysClockFreq+0x1f2>
 8001acc:	4b05      	ldr	r3, [pc, #20]	@ (8001ae4 <HAL_RCC_GetSysClockFreq+0x204>)
 8001ace:	64bb      	str	r3, [r7, #72]	@ 0x48
 8001ad0:	bf00      	nop
 8001ad2:	6cbb      	ldr	r3, [r7, #72]	@ 0x48
 8001ad4:	4618      	mov	r0, r3
 8001ad6:	3750      	adds	r7, #80	@ 0x50
 8001ad8:	46bd      	mov	sp, r7
 8001ada:	e8bd 8fb0 	ldmia.w	sp!, {r4, r5, r7, r8, r9, sl, fp, pc}
 8001ade:	bf00      	nop
 8001ae0:	40023800 	.word	0x40023800
 8001ae4:	00f42400 	.word	0x00f42400
 8001ae8:	007a1200 	.word	0x007a1200

08001aec <HAL_TIM_Base_Init>:
 8001aec:	b580      	push	{r7, lr}
 8001aee:	b082      	sub	sp, #8
 8001af0:	af00      	add	r7, sp, #0
 8001af2:	6078      	str	r0, [r7, #4]
 8001af4:	687b      	ldr	r3, [r7, #4]
 8001af6:	2b00      	cmp	r3, #0
 8001af8:	d101      	bne.n	8001afe <HAL_TIM_Base_Init+0x12>
 8001afa:	2301      	movs	r3, #1
 8001afc:	e041      	b.n	8001b82 <HAL_TIM_Base_Init+0x96>
 8001afe:	687b      	ldr	r3, [r7, #4]
 8001b00:	f893 303d 	ldrb.w	r3, [r3, #61]	@ 0x3d
 8001b04:	b2db      	uxtb	r3, r3
 8001b06:	2b00      	cmp	r3, #0
 8001b08:	d106      	bne.n	8001b18 <HAL_TIM_Base_Init+0x2c>
 8001b0a:	687b      	ldr	r3, [r7, #4]
 8001b0c:	2200      	movs	r2, #0
 8001b0e:	f883 203c 	strb.w	r2, [r3, #60]	@ 0x3c
 8001b12:	6878      	ldr	r0, [r7, #4]
 8001b14:	f7fe feda 	bl	80008cc <HAL_TIM_Base_MspInit>
 8001b18:	687b      	ldr	r3, [r7, #4]
 8001b1a:	2202      	movs	r2, #2
 8001b1c:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8001b20:	687b      	ldr	r3, [r7, #4]
 8001b22:	681a      	ldr	r2, [r3, #0]
 8001b24:	687b      	ldr	r3, [r7, #4]
 8001b26:	3304      	adds	r3, #4
 8001b28:	4619      	mov	r1, r3
 8001b2a:	4610      	mov	r0, r2
 8001b2c:	f000 fa70 	bl	8002010 <TIM_Base_SetConfig>
 8001b30:	687b      	ldr	r3, [r7, #4]
 8001b32:	2201      	movs	r2, #1
 8001b34:	f883 2046 	strb.w	r2, [r3, #70]	@ 0x46
 8001b38:	687b      	ldr	r3, [r7, #4]
 8001b3a:	2201      	movs	r2, #1
 8001b3c:	f883 203e 	strb.w	r2, [r3, #62]	@ 0x3e
 8001b40:	687b      	ldr	r3, [r7, #4]
 8001b42:	2201      	movs	r2, #1
 8001b44:	f883 203f 	strb.w	r2, [r3, #63]	@ 0x3f
 8001b48:	687b      	ldr	r3, [r7, #4]
 8001b4a:	2201      	movs	r2, #1
 8001b4c:	f883 2040 	strb.w	r2, [r3, #64]	@ 0x40
 8001b50:	687b      	ldr	r3, [r7, #4]
 8001b52:	2201      	movs	r2, #1
 8001b54:	f883 2041 	strb.w	r2, [r3, #65]	@ 0x41
 8001b58:	687b      	ldr	r3, [r7, #4]
 8001b5a:	2201      	movs	r2, #1
 8001b5c:	f883 2042 	strb.w	r2, [r3, #66]	@ 0x42
 8001b60:	687b      	ldr	r3, [r7, #4]
 8001b62:	2201      	movs	r2, #1
 8001b64:	f883 2043 	strb.w	r2, [r3, #67]	@ 0x43
 8001b68:	687b      	ldr	r3, [r7, #4]
 8001b6a:	2201      	movs	r2, #1
 8001b6c:	f883 2044 	strb.w	r2, [r3, #68]	@ 0x44
 8001b70:	687b      	ldr	r3, [r7, #4]
 8001b72:	2201      	movs	r2, #1
 8001b74:	f883 2045 	strb.w	r2, [r3, #69]	@ 0x45
 8001b78:	687b      	ldr	r3, [r7, #4]
 8001b7a:	2201      	movs	r2, #1
 8001b7c:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8001b80:	2300      	movs	r3, #0
 8001b82:	4618      	mov	r0, r3
 8001b84:	3708      	adds	r7, #8
 8001b86:	46bd      	mov	sp, r7
 8001b88:	bd80      	pop	{r7, pc}
	...

08001b8c <HAL_TIM_Base_Start_IT>:
 8001b8c:	b480      	push	{r7}
 8001b8e:	b085      	sub	sp, #20
 8001b90:	af00      	add	r7, sp, #0
 8001b92:	6078      	str	r0, [r7, #4]
 8001b94:	687b      	ldr	r3, [r7, #4]
 8001b96:	f893 303d 	ldrb.w	r3, [r3, #61]	@ 0x3d
 8001b9a:	b2db      	uxtb	r3, r3
 8001b9c:	2b01      	cmp	r3, #1
 8001b9e:	d001      	beq.n	8001ba4 <HAL_TIM_Base_Start_IT+0x18>
 8001ba0:	2301      	movs	r3, #1
 8001ba2:	e044      	b.n	8001c2e <HAL_TIM_Base_Start_IT+0xa2>
 8001ba4:	687b      	ldr	r3, [r7, #4]
 8001ba6:	2202      	movs	r2, #2
 8001ba8:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8001bac:	687b      	ldr	r3, [r7, #4]
 8001bae:	681b      	ldr	r3, [r3, #0]
 8001bb0:	68da      	ldr	r2, [r3, #12]
 8001bb2:	687b      	ldr	r3, [r7, #4]
 8001bb4:	681b      	ldr	r3, [r3, #0]
 8001bb6:	f042 0201 	orr.w	r2, r2, #1
 8001bba:	60da      	str	r2, [r3, #12]
 8001bbc:	687b      	ldr	r3, [r7, #4]
 8001bbe:	681b      	ldr	r3, [r3, #0]
 8001bc0:	4a1e      	ldr	r2, [pc, #120]	@ (8001c3c <HAL_TIM_Base_Start_IT+0xb0>)
 8001bc2:	4293      	cmp	r3, r2
 8001bc4:	d018      	beq.n	8001bf8 <HAL_TIM_Base_Start_IT+0x6c>
 8001bc6:	687b      	ldr	r3, [r7, #4]
 8001bc8:	681b      	ldr	r3, [r3, #0]
 8001bca:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 8001bce:	d013      	beq.n	8001bf8 <HAL_TIM_Base_Start_IT+0x6c>
 8001bd0:	687b      	ldr	r3, [r7, #4]
 8001bd2:	681b      	ldr	r3, [r3, #0]
 8001bd4:	4a1a      	ldr	r2, [pc, #104]	@ (8001c40 <HAL_TIM_Base_Start_IT+0xb4>)
 8001bd6:	4293      	cmp	r3, r2
 8001bd8:	d00e      	beq.n	8001bf8 <HAL_TIM_Base_Start_IT+0x6c>
 8001bda:	687b      	ldr	r3, [r7, #4]
 8001bdc:	681b      	ldr	r3, [r3, #0]
 8001bde:	4a19      	ldr	r2, [pc, #100]	@ (8001c44 <HAL_TIM_Base_Start_IT+0xb8>)
 8001be0:	4293      	cmp	r3, r2
 8001be2:	d009      	beq.n	8001bf8 <HAL_TIM_Base_Start_IT+0x6c>
 8001be4:	687b      	ldr	r3, [r7, #4]
 8001be6:	681b      	ldr	r3, [r3, #0]
 8001be8:	4a17      	ldr	r2, [pc, #92]	@ (8001c48 <HAL_TIM_Base_Start_IT+0xbc>)
 8001bea:	4293      	cmp	r3, r2
 8001bec:	d004      	beq.n	8001bf8 <HAL_TIM_Base_Start_IT+0x6c>
 8001bee:	687b      	ldr	r3, [r7, #4]
 8001bf0:	681b      	ldr	r3, [r3, #0]
 8001bf2:	4a16      	ldr	r2, [pc, #88]	@ (8001c4c <HAL_TIM_Base_Start_IT+0xc0>)
 8001bf4:	4293      	cmp	r3, r2
 8001bf6:	d111      	bne.n	8001c1c <HAL_TIM_Base_Start_IT+0x90>
 8001bf8:	687b      	ldr	r3, [r7, #4]
 8001bfa:	681b      	ldr	r3, [r3, #0]
 8001bfc:	689b      	ldr	r3, [r3, #8]
 8001bfe:	f003 0307 	and.w	r3, r3, #7
 8001c02:	60fb      	str	r3, [r7, #12]
 8001c04:	68fb      	ldr	r3, [r7, #12]
 8001c06:	2b06      	cmp	r3, #6
 8001c08:	d010      	beq.n	8001c2c <HAL_TIM_Base_Start_IT+0xa0>
 8001c0a:	687b      	ldr	r3, [r7, #4]
 8001c0c:	681b      	ldr	r3, [r3, #0]
 8001c0e:	681a      	ldr	r2, [r3, #0]
 8001c10:	687b      	ldr	r3, [r7, #4]
 8001c12:	681b      	ldr	r3, [r3, #0]
 8001c14:	f042 0201 	orr.w	r2, r2, #1
 8001c18:	601a      	str	r2, [r3, #0]
 8001c1a:	e007      	b.n	8001c2c <HAL_TIM_Base_Start_IT+0xa0>
 8001c1c:	687b      	ldr	r3, [r7, #4]
 8001c1e:	681b      	ldr	r3, [r3, #0]
 8001c20:	681a      	ldr	r2, [r3, #0]
 8001c22:	687b      	ldr	r3, [r7, #4]
 8001c24:	681b      	ldr	r3, [r3, #0]
 8001c26:	f042 0201 	orr.w	r2, r2, #1
 8001c2a:	601a      	str	r2, [r3, #0]
 8001c2c:	2300      	movs	r3, #0
 8001c2e:	4618      	mov	r0, r3
 8001c30:	3714      	adds	r7, #20
 8001c32:	46bd      	mov	sp, r7
 8001c34:	f85d 7b04 	ldr.w	r7, [sp], #4
 8001c38:	4770      	bx	lr
 8001c3a:	bf00      	nop
 8001c3c:	40010000 	.word	0x40010000
 8001c40:	40000400 	.word	0x40000400
 8001c44:	40000800 	.word	0x40000800
 8001c48:	40000c00 	.word	0x40000c00
 8001c4c:	40014000 	.word	0x40014000

08001c50 <HAL_TIM_IRQHandler>:
 8001c50:	b580      	push	{r7, lr}
 8001c52:	b084      	sub	sp, #16
 8001c54:	af00      	add	r7, sp, #0
 8001c56:	6078      	str	r0, [r7, #4]
 8001c58:	687b      	ldr	r3, [r7, #4]
 8001c5a:	681b      	ldr	r3, [r3, #0]
 8001c5c:	68db      	ldr	r3, [r3, #12]
 8001c5e:	60fb      	str	r3, [r7, #12]
 8001c60:	687b      	ldr	r3, [r7, #4]
 8001c62:	681b      	ldr	r3, [r3, #0]
 8001c64:	691b      	ldr	r3, [r3, #16]
 8001c66:	60bb      	str	r3, [r7, #8]
 8001c68:	68bb      	ldr	r3, [r7, #8]
 8001c6a:	f003 0302 	and.w	r3, r3, #2
 8001c6e:	2b00      	cmp	r3, #0
 8001c70:	d020      	beq.n	8001cb4 <HAL_TIM_IRQHandler+0x64>
 8001c72:	68fb      	ldr	r3, [r7, #12]
 8001c74:	f003 0302 	and.w	r3, r3, #2
 8001c78:	2b00      	cmp	r3, #0
 8001c7a:	d01b      	beq.n	8001cb4 <HAL_TIM_IRQHandler+0x64>
 8001c7c:	687b      	ldr	r3, [r7, #4]
 8001c7e:	681b      	ldr	r3, [r3, #0]
 8001c80:	f06f 0202 	mvn.w	r2, #2
 8001c84:	611a      	str	r2, [r3, #16]
 8001c86:	687b      	ldr	r3, [r7, #4]
 8001c88:	2201      	movs	r2, #1
 8001c8a:	771a      	strb	r2, [r3, #28]
 8001c8c:	687b      	ldr	r3, [r7, #4]
 8001c8e:	681b      	ldr	r3, [r3, #0]
 8001c90:	699b      	ldr	r3, [r3, #24]
 8001c92:	f003 0303 	and.w	r3, r3, #3
 8001c96:	2b00      	cmp	r3, #0
 8001c98:	d003      	beq.n	8001ca2 <HAL_TIM_IRQHandler+0x52>
 8001c9a:	6878      	ldr	r0, [r7, #4]
 8001c9c:	f000 f999 	bl	8001fd2 <HAL_TIM_IC_CaptureCallback>
 8001ca0:	e005      	b.n	8001cae <HAL_TIM_IRQHandler+0x5e>
 8001ca2:	6878      	ldr	r0, [r7, #4]
 8001ca4:	f000 f98b 	bl	8001fbe <HAL_TIM_OC_DelayElapsedCallback>
 8001ca8:	6878      	ldr	r0, [r7, #4]
 8001caa:	f000 f99c 	bl	8001fe6 <HAL_TIM_PWM_PulseFinishedCallback>
 8001cae:	687b      	ldr	r3, [r7, #4]
 8001cb0:	2200      	movs	r2, #0
 8001cb2:	771a      	strb	r2, [r3, #28]
 8001cb4:	68bb      	ldr	r3, [r7, #8]
 8001cb6:	f003 0304 	and.w	r3, r3, #4
 8001cba:	2b00      	cmp	r3, #0
 8001cbc:	d020      	beq.n	8001d00 <HAL_TIM_IRQHandler+0xb0>
 8001cbe:	68fb      	ldr	r3, [r7, #12]
 8001cc0:	f003 0304 	and.w	r3, r3, #4
 8001cc4:	2b00      	cmp	r3, #0
 8001cc6:	d01b      	beq.n	8001d00 <HAL_TIM_IRQHandler+0xb0>
 8001cc8:	687b      	ldr	r3, [r7, #4]
 8001cca:	681b      	ldr	r3, [r3, #0]
 8001ccc:	f06f 0204 	mvn.w	r2, #4
 8001cd0:	611a      	str	r2, [r3, #16]
 8001cd2:	687b      	ldr	r3, [r7, #4]
 8001cd4:	2202      	movs	r2, #2
 8001cd6:	771a      	strb	r2, [r3, #28]
 8001cd8:	687b      	ldr	r3, [r7, #4]
 8001cda:	681b      	ldr	r3, [r3, #0]
 8001cdc:	699b      	ldr	r3, [r3, #24]
 8001cde:	f403 7340 	and.w	r3, r3, #768	@ 0x300
 8001ce2:	2b00      	cmp	r3, #0
 8001ce4:	d003      	beq.n	8001cee <HAL_TIM_IRQHandler+0x9e>
 8001ce6:	6878      	ldr	r0, [r7, #4]
 8001ce8:	f000 f973 	bl	8001fd2 <HAL_TIM_IC_CaptureCallback>
 8001cec:	e005      	b.n	8001cfa <HAL_TIM_IRQHandler+0xaa>
 8001cee:	6878      	ldr	r0, [r7, #4]
 8001cf0:	f000 f965 	bl	8001fbe <HAL_TIM_OC_DelayElapsedCallback>
 8001cf4:	6878      	ldr	r0, [r7, #4]
 8001cf6:	f000 f976 	bl	8001fe6 <HAL_TIM_PWM_PulseFinishedCallback>
 8001cfa:	687b      	ldr	r3, [r7, #4]
 8001cfc:	2200      	movs	r2, #0
 8001cfe:	771a      	strb	r2, [r3, #28]
 8001d00:	68bb      	ldr	r3, [r7, #8]
 8001d02:	f003 0308 	and.w	r3, r3, #8
 8001d06:	2b00      	cmp	r3, #0
 8001d08:	d020      	beq.n	8001d4c <HAL_TIM_IRQHandler+0xfc>
 8001d0a:	68fb      	ldr	r3, [r7, #12]
 8001d0c:	f003 0308 	and.w	r3, r3, #8
 8001d10:	2b00      	cmp	r3, #0
 8001d12:	d01b      	beq.n	8001d4c <HAL_TIM_IRQHandler+0xfc>
 8001d14:	687b      	ldr	r3, [r7, #4]
 8001d16:	681b      	ldr	r3, [r3, #0]
 8001d18:	f06f 0208 	mvn.w	r2, #8
 8001d1c:	611a      	str	r2, [r3, #16]
 8001d1e:	687b      	ldr	r3, [r7, #4]
 8001d20:	2204      	movs	r2, #4
 8001d22:	771a      	strb	r2, [r3, #28]
 8001d24:	687b      	ldr	r3, [r7, #4]
 8001d26:	681b      	ldr	r3, [r3, #0]
 8001d28:	69db      	ldr	r3, [r3, #28]
 8001d2a:	f003 0303 	and.w	r3, r3, #3
 8001d2e:	2b00      	cmp	r3, #0
 8001d30:	d003      	beq.n	8001d3a <HAL_TIM_IRQHandler+0xea>
 8001d32:	6878      	ldr	r0, [r7, #4]
 8001d34:	f000 f94d 	bl	8001fd2 <HAL_TIM_IC_CaptureCallback>
 8001d38:	e005      	b.n	8001d46 <HAL_TIM_IRQHandler+0xf6>
 8001d3a:	6878      	ldr	r0, [r7, #4]
 8001d3c:	f000 f93f 	bl	8001fbe <HAL_TIM_OC_DelayElapsedCallback>
 8001d40:	6878      	ldr	r0, [r7, #4]
 8001d42:	f000 f950 	bl	8001fe6 <HAL_TIM_PWM_PulseFinishedCallback>
 8001d46:	687b      	ldr	r3, [r7, #4]
 8001d48:	2200      	movs	r2, #0
 8001d4a:	771a      	strb	r2, [r3, #28]
 8001d4c:	68bb      	ldr	r3, [r7, #8]
 8001d4e:	f003 0310 	and.w	r3, r3, #16
 8001d52:	2b00      	cmp	r3, #0
 8001d54:	d020      	beq.n	8001d98 <HAL_TIM_IRQHandler+0x148>
 8001d56:	68fb      	ldr	r3, [r7, #12]
 8001d58:	f003 0310 	and.w	r3, r3, #16
 8001d5c:	2b00      	cmp	r3, #0
 8001d5e:	d01b      	beq.n	8001d98 <HAL_TIM_IRQHandler+0x148>
 8001d60:	687b      	ldr	r3, [r7, #4]
 8001d62:	681b      	ldr	r3, [r3, #0]
 8001d64:	f06f 0210 	mvn.w	r2, #16
 8001d68:	611a      	str	r2, [r3, #16]
 8001d6a:	687b      	ldr	r3, [r7, #4]
 8001d6c:	2208      	movs	r2, #8
 8001d6e:	771a      	strb	r2, [r3, #28]
 8001d70:	687b      	ldr	r3, [r7, #4]
 8001d72:	681b      	ldr	r3, [r3, #0]
 8001d74:	69db      	ldr	r3, [r3, #28]
 8001d76:	f403 7340 	and.w	r3, r3, #768	@ 0x300
 8001d7a:	2b00      	cmp	r3, #0
 8001d7c:	d003      	beq.n	8001d86 <HAL_TIM_IRQHandler+0x136>
 8001d7e:	6878      	ldr	r0, [r7, #4]
 8001d80:	f000 f927 	bl	8001fd2 <HAL_TIM_IC_CaptureCallback>
 8001d84:	e005      	b.n	8001d92 <HAL_TIM_IRQHandler+0x142>
 8001d86:	6878      	ldr	r0, [r7, #4]
 8001d88:	f000 f919 	bl	8001fbe <HAL_TIM_OC_DelayElapsedCallback>
 8001d8c:	6878      	ldr	r0, [r7, #4]
 8001d8e:	f000 f92a 	bl	8001fe6 <HAL_TIM_PWM_PulseFinishedCallback>
 8001d92:	687b      	ldr	r3, [r7, #4]
 8001d94:	2200      	movs	r2, #0
 8001d96:	771a      	strb	r2, [r3, #28]
 8001d98:	68bb      	ldr	r3, [r7, #8]
 8001d9a:	f003 0301 	and.w	r3, r3, #1
 8001d9e:	2b00      	cmp	r3, #0
 8001da0:	d00c      	beq.n	8001dbc <HAL_TIM_IRQHandler+0x16c>
 8001da2:	68fb      	ldr	r3, [r7, #12]
 8001da4:	f003 0301 	and.w	r3, r3, #1
 8001da8:	2b00      	cmp	r3, #0
 8001daa:	d007      	beq.n	8001dbc <HAL_TIM_IRQHandler+0x16c>
 8001dac:	687b      	ldr	r3, [r7, #4]
 8001dae:	681b      	ldr	r3, [r3, #0]
 8001db0:	f06f 0201 	mvn.w	r2, #1
 8001db4:	611a      	str	r2, [r3, #16]
 8001db6:	6878      	ldr	r0, [r7, #4]
 8001db8:	f7fe fdd7 	bl	800096a <HAL_TIM_PeriodElapsedCallback>
 8001dbc:	68bb      	ldr	r3, [r7, #8]
 8001dbe:	f003 0380 	and.w	r3, r3, #128	@ 0x80
 8001dc2:	2b00      	cmp	r3, #0
 8001dc4:	d00c      	beq.n	8001de0 <HAL_TIM_IRQHandler+0x190>
 8001dc6:	68fb      	ldr	r3, [r7, #12]
 8001dc8:	f003 0380 	and.w	r3, r3, #128	@ 0x80
 8001dcc:	2b00      	cmp	r3, #0
 8001dce:	d007      	beq.n	8001de0 <HAL_TIM_IRQHandler+0x190>
 8001dd0:	687b      	ldr	r3, [r7, #4]
 8001dd2:	681b      	ldr	r3, [r3, #0]
 8001dd4:	f06f 0280 	mvn.w	r2, #128	@ 0x80
 8001dd8:	611a      	str	r2, [r3, #16]
 8001dda:	6878      	ldr	r0, [r7, #4]
 8001ddc:	f000 fab0 	bl	8002340 <HAL_TIMEx_BreakCallback>
 8001de0:	68bb      	ldr	r3, [r7, #8]
 8001de2:	f003 0340 	and.w	r3, r3, #64	@ 0x40
 8001de6:	2b00      	cmp	r3, #0
 8001de8:	d00c      	beq.n	8001e04 <HAL_TIM_IRQHandler+0x1b4>
 8001dea:	68fb      	ldr	r3, [r7, #12]
 8001dec:	f003 0340 	and.w	r3, r3, #64	@ 0x40
 8001df0:	2b00      	cmp	r3, #0
 8001df2:	d007      	beq.n	8001e04 <HAL_TIM_IRQHandler+0x1b4>
 8001df4:	687b      	ldr	r3, [r7, #4]
 8001df6:	681b      	ldr	r3, [r3, #0]
 8001df8:	f06f 0240 	mvn.w	r2, #64	@ 0x40
 8001dfc:	611a      	str	r2, [r3, #16]
 8001dfe:	6878      	ldr	r0, [r7, #4]
 8001e00:	f000 f8fb 	bl	8001ffa <HAL_TIM_TriggerCallback>
 8001e04:	68bb      	ldr	r3, [r7, #8]
 8001e06:	f003 0320 	and.w	r3, r3, #32
 8001e0a:	2b00      	cmp	r3, #0
 8001e0c:	d00c      	beq.n	8001e28 <HAL_TIM_IRQHandler+0x1d8>
 8001e0e:	68fb      	ldr	r3, [r7, #12]
 8001e10:	f003 0320 	and.w	r3, r3, #32
 8001e14:	2b00      	cmp	r3, #0
 8001e16:	d007      	beq.n	8001e28 <HAL_TIM_IRQHandler+0x1d8>
 8001e18:	687b      	ldr	r3, [r7, #4]
 8001e1a:	681b      	ldr	r3, [r3, #0]
 8001e1c:	f06f 0220 	mvn.w	r2, #32
 8001e20:	611a      	str	r2, [r3, #16]
 8001e22:	6878      	ldr	r0, [r7, #4]
 8001e24:	f000 fa82 	bl	800232c <HAL_TIMEx_CommutCallback>
 8001e28:	bf00      	nop
 8001e2a:	3710      	adds	r7, #16
 8001e2c:	46bd      	mov	sp, r7
 8001e2e:	bd80      	pop	{r7, pc}

08001e30 <HAL_TIM_ConfigClockSource>:
 8001e30:	b580      	push	{r7, lr}
 8001e32:	b084      	sub	sp, #16
 8001e34:	af00      	add	r7, sp, #0
 8001e36:	6078      	str	r0, [r7, #4]
 8001e38:	6039      	str	r1, [r7, #0]
 8001e3a:	2300      	movs	r3, #0
 8001e3c:	73fb      	strb	r3, [r7, #15]
 8001e3e:	687b      	ldr	r3, [r7, #4]
 8001e40:	f893 303c 	ldrb.w	r3, [r3, #60]	@ 0x3c
 8001e44:	2b01      	cmp	r3, #1
 8001e46:	d101      	bne.n	8001e4c <HAL_TIM_ConfigClockSource+0x1c>
 8001e48:	2302      	movs	r3, #2
 8001e4a:	e0b4      	b.n	8001fb6 <HAL_TIM_ConfigClockSource+0x186>
 8001e4c:	687b      	ldr	r3, [r7, #4]
 8001e4e:	2201      	movs	r2, #1
 8001e50:	f883 203c 	strb.w	r2, [r3, #60]	@ 0x3c
 8001e54:	687b      	ldr	r3, [r7, #4]
 8001e56:	2202      	movs	r2, #2
 8001e58:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8001e5c:	687b      	ldr	r3, [r7, #4]
 8001e5e:	681b      	ldr	r3, [r3, #0]
 8001e60:	689b      	ldr	r3, [r3, #8]
 8001e62:	60bb      	str	r3, [r7, #8]
 8001e64:	68bb      	ldr	r3, [r7, #8]
 8001e66:	f023 0377 	bic.w	r3, r3, #119	@ 0x77
 8001e6a:	60bb      	str	r3, [r7, #8]
 8001e6c:	68bb      	ldr	r3, [r7, #8]
 8001e6e:	f423 437f 	bic.w	r3, r3, #65280	@ 0xff00
 8001e72:	60bb      	str	r3, [r7, #8]
 8001e74:	687b      	ldr	r3, [r7, #4]
 8001e76:	681b      	ldr	r3, [r3, #0]
 8001e78:	68ba      	ldr	r2, [r7, #8]
 8001e7a:	609a      	str	r2, [r3, #8]
 8001e7c:	683b      	ldr	r3, [r7, #0]
 8001e7e:	681b      	ldr	r3, [r3, #0]
 8001e80:	f5b3 5f00 	cmp.w	r3, #8192	@ 0x2000
 8001e84:	d03e      	beq.n	8001f04 <HAL_TIM_ConfigClockSource+0xd4>
 8001e86:	f5b3 5f00 	cmp.w	r3, #8192	@ 0x2000
 8001e8a:	f200 8087 	bhi.w	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001e8e:	f5b3 5f80 	cmp.w	r3, #4096	@ 0x1000
 8001e92:	f000 8086 	beq.w	8001fa2 <HAL_TIM_ConfigClockSource+0x172>
 8001e96:	f5b3 5f80 	cmp.w	r3, #4096	@ 0x1000
 8001e9a:	d87f      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001e9c:	2b70      	cmp	r3, #112	@ 0x70
 8001e9e:	d01a      	beq.n	8001ed6 <HAL_TIM_ConfigClockSource+0xa6>
 8001ea0:	2b70      	cmp	r3, #112	@ 0x70
 8001ea2:	d87b      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001ea4:	2b60      	cmp	r3, #96	@ 0x60
 8001ea6:	d050      	beq.n	8001f4a <HAL_TIM_ConfigClockSource+0x11a>
 8001ea8:	2b60      	cmp	r3, #96	@ 0x60
 8001eaa:	d877      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001eac:	2b50      	cmp	r3, #80	@ 0x50
 8001eae:	d03c      	beq.n	8001f2a <HAL_TIM_ConfigClockSource+0xfa>
 8001eb0:	2b50      	cmp	r3, #80	@ 0x50
 8001eb2:	d873      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001eb4:	2b40      	cmp	r3, #64	@ 0x40
 8001eb6:	d058      	beq.n	8001f6a <HAL_TIM_ConfigClockSource+0x13a>
 8001eb8:	2b40      	cmp	r3, #64	@ 0x40
 8001eba:	d86f      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001ebc:	2b30      	cmp	r3, #48	@ 0x30
 8001ebe:	d064      	beq.n	8001f8a <HAL_TIM_ConfigClockSource+0x15a>
 8001ec0:	2b30      	cmp	r3, #48	@ 0x30
 8001ec2:	d86b      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001ec4:	2b20      	cmp	r3, #32
 8001ec6:	d060      	beq.n	8001f8a <HAL_TIM_ConfigClockSource+0x15a>
 8001ec8:	2b20      	cmp	r3, #32
 8001eca:	d867      	bhi.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001ecc:	2b00      	cmp	r3, #0
 8001ece:	d05c      	beq.n	8001f8a <HAL_TIM_ConfigClockSource+0x15a>
 8001ed0:	2b10      	cmp	r3, #16
 8001ed2:	d05a      	beq.n	8001f8a <HAL_TIM_ConfigClockSource+0x15a>
 8001ed4:	e062      	b.n	8001f9c <HAL_TIM_ConfigClockSource+0x16c>
 8001ed6:	687b      	ldr	r3, [r7, #4]
 8001ed8:	6818      	ldr	r0, [r3, #0]
 8001eda:	683b      	ldr	r3, [r7, #0]
 8001edc:	6899      	ldr	r1, [r3, #8]
 8001ede:	683b      	ldr	r3, [r7, #0]
 8001ee0:	685a      	ldr	r2, [r3, #4]
 8001ee2:	683b      	ldr	r3, [r7, #0]
 8001ee4:	68db      	ldr	r3, [r3, #12]
 8001ee6:	f000 f993 	bl	8002210 <TIM_ETR_SetConfig>
 8001eea:	687b      	ldr	r3, [r7, #4]
 8001eec:	681b      	ldr	r3, [r3, #0]
 8001eee:	689b      	ldr	r3, [r3, #8]
 8001ef0:	60bb      	str	r3, [r7, #8]
 8001ef2:	68bb      	ldr	r3, [r7, #8]
 8001ef4:	f043 0377 	orr.w	r3, r3, #119	@ 0x77
 8001ef8:	60bb      	str	r3, [r7, #8]
 8001efa:	687b      	ldr	r3, [r7, #4]
 8001efc:	681b      	ldr	r3, [r3, #0]
 8001efe:	68ba      	ldr	r2, [r7, #8]
 8001f00:	609a      	str	r2, [r3, #8]
 8001f02:	e04f      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f04:	687b      	ldr	r3, [r7, #4]
 8001f06:	6818      	ldr	r0, [r3, #0]
 8001f08:	683b      	ldr	r3, [r7, #0]
 8001f0a:	6899      	ldr	r1, [r3, #8]
 8001f0c:	683b      	ldr	r3, [r7, #0]
 8001f0e:	685a      	ldr	r2, [r3, #4]
 8001f10:	683b      	ldr	r3, [r7, #0]
 8001f12:	68db      	ldr	r3, [r3, #12]
 8001f14:	f000 f97c 	bl	8002210 <TIM_ETR_SetConfig>
 8001f18:	687b      	ldr	r3, [r7, #4]
 8001f1a:	681b      	ldr	r3, [r3, #0]
 8001f1c:	689a      	ldr	r2, [r3, #8]
 8001f1e:	687b      	ldr	r3, [r7, #4]
 8001f20:	681b      	ldr	r3, [r3, #0]
 8001f22:	f442 4280 	orr.w	r2, r2, #16384	@ 0x4000
 8001f26:	609a      	str	r2, [r3, #8]
 8001f28:	e03c      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f2a:	687b      	ldr	r3, [r7, #4]
 8001f2c:	6818      	ldr	r0, [r3, #0]
 8001f2e:	683b      	ldr	r3, [r7, #0]
 8001f30:	6859      	ldr	r1, [r3, #4]
 8001f32:	683b      	ldr	r3, [r7, #0]
 8001f34:	68db      	ldr	r3, [r3, #12]
 8001f36:	461a      	mov	r2, r3
 8001f38:	f000 f8f0 	bl	800211c <TIM_TI1_ConfigInputStage>
 8001f3c:	687b      	ldr	r3, [r7, #4]
 8001f3e:	681b      	ldr	r3, [r3, #0]
 8001f40:	2150      	movs	r1, #80	@ 0x50
 8001f42:	4618      	mov	r0, r3
 8001f44:	f000 f949 	bl	80021da <TIM_ITRx_SetConfig>
 8001f48:	e02c      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f4a:	687b      	ldr	r3, [r7, #4]
 8001f4c:	6818      	ldr	r0, [r3, #0]
 8001f4e:	683b      	ldr	r3, [r7, #0]
 8001f50:	6859      	ldr	r1, [r3, #4]
 8001f52:	683b      	ldr	r3, [r7, #0]
 8001f54:	68db      	ldr	r3, [r3, #12]
 8001f56:	461a      	mov	r2, r3
 8001f58:	f000 f90f 	bl	800217a <TIM_TI2_ConfigInputStage>
 8001f5c:	687b      	ldr	r3, [r7, #4]
 8001f5e:	681b      	ldr	r3, [r3, #0]
 8001f60:	2160      	movs	r1, #96	@ 0x60
 8001f62:	4618      	mov	r0, r3
 8001f64:	f000 f939 	bl	80021da <TIM_ITRx_SetConfig>
 8001f68:	e01c      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f6a:	687b      	ldr	r3, [r7, #4]
 8001f6c:	6818      	ldr	r0, [r3, #0]
 8001f6e:	683b      	ldr	r3, [r7, #0]
 8001f70:	6859      	ldr	r1, [r3, #4]
 8001f72:	683b      	ldr	r3, [r7, #0]
 8001f74:	68db      	ldr	r3, [r3, #12]
 8001f76:	461a      	mov	r2, r3
 8001f78:	f000 f8d0 	bl	800211c <TIM_TI1_ConfigInputStage>
 8001f7c:	687b      	ldr	r3, [r7, #4]
 8001f7e:	681b      	ldr	r3, [r3, #0]
 8001f80:	2140      	movs	r1, #64	@ 0x40
 8001f82:	4618      	mov	r0, r3
 8001f84:	f000 f929 	bl	80021da <TIM_ITRx_SetConfig>
 8001f88:	e00c      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f8a:	687b      	ldr	r3, [r7, #4]
 8001f8c:	681a      	ldr	r2, [r3, #0]
 8001f8e:	683b      	ldr	r3, [r7, #0]
 8001f90:	681b      	ldr	r3, [r3, #0]
 8001f92:	4619      	mov	r1, r3
 8001f94:	4610      	mov	r0, r2
 8001f96:	f000 f920 	bl	80021da <TIM_ITRx_SetConfig>
 8001f9a:	e003      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001f9c:	2301      	movs	r3, #1
 8001f9e:	73fb      	strb	r3, [r7, #15]
 8001fa0:	e000      	b.n	8001fa4 <HAL_TIM_ConfigClockSource+0x174>
 8001fa2:	bf00      	nop
 8001fa4:	687b      	ldr	r3, [r7, #4]
 8001fa6:	2201      	movs	r2, #1
 8001fa8:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8001fac:	687b      	ldr	r3, [r7, #4]
 8001fae:	2200      	movs	r2, #0
 8001fb0:	f883 203c 	strb.w	r2, [r3, #60]	@ 0x3c
 8001fb4:	7bfb      	ldrb	r3, [r7, #15]
 8001fb6:	4618      	mov	r0, r3
 8001fb8:	3710      	adds	r7, #16
 8001fba:	46bd      	mov	sp, r7
 8001fbc:	bd80      	pop	{r7, pc}

08001fbe <HAL_TIM_OC_DelayElapsedCallback>:
 8001fbe:	b480      	push	{r7}
 8001fc0:	b083      	sub	sp, #12
 8001fc2:	af00      	add	r7, sp, #0
 8001fc4:	6078      	str	r0, [r7, #4]
 8001fc6:	bf00      	nop
 8001fc8:	370c      	adds	r7, #12
 8001fca:	46bd      	mov	sp, r7
 8001fcc:	f85d 7b04 	ldr.w	r7, [sp], #4
 8001fd0:	4770      	bx	lr

08001fd2 <HAL_TIM_IC_CaptureCallback>:
 8001fd2:	b480      	push	{r7}
 8001fd4:	b083      	sub	sp, #12
 8001fd6:	af00      	add	r7, sp, #0
 8001fd8:	6078      	str	r0, [r7, #4]
 8001fda:	bf00      	nop
 8001fdc:	370c      	adds	r7, #12
 8001fde:	46bd      	mov	sp, r7
 8001fe0:	f85d 7b04 	ldr.w	r7, [sp], #4
 8001fe4:	4770      	bx	lr

08001fe6 <HAL_TIM_PWM_PulseFinishedCallback>:
 8001fe6:	b480      	push	{r7}
 8001fe8:	b083      	sub	sp, #12
 8001fea:	af00      	add	r7, sp, #0
 8001fec:	6078      	str	r0, [r7, #4]
 8001fee:	bf00      	nop
 8001ff0:	370c      	adds	r7, #12
 8001ff2:	46bd      	mov	sp, r7
 8001ff4:	f85d 7b04 	ldr.w	r7, [sp], #4
 8001ff8:	4770      	bx	lr

08001ffa <HAL_TIM_TriggerCallback>:
 8001ffa:	b480      	push	{r7}
 8001ffc:	b083      	sub	sp, #12
 8001ffe:	af00      	add	r7, sp, #0
 8002000:	6078      	str	r0, [r7, #4]
 8002002:	bf00      	nop
 8002004:	370c      	adds	r7, #12
 8002006:	46bd      	mov	sp, r7
 8002008:	f85d 7b04 	ldr.w	r7, [sp], #4
 800200c:	4770      	bx	lr
	...

08002010 <TIM_Base_SetConfig>:
 8002010:	b480      	push	{r7}
 8002012:	b085      	sub	sp, #20
 8002014:	af00      	add	r7, sp, #0
 8002016:	6078      	str	r0, [r7, #4]
 8002018:	6039      	str	r1, [r7, #0]
 800201a:	687b      	ldr	r3, [r7, #4]
 800201c:	681b      	ldr	r3, [r3, #0]
 800201e:	60fb      	str	r3, [r7, #12]
 8002020:	687b      	ldr	r3, [r7, #4]
 8002022:	4a37      	ldr	r2, [pc, #220]	@ (8002100 <TIM_Base_SetConfig+0xf0>)
 8002024:	4293      	cmp	r3, r2
 8002026:	d00f      	beq.n	8002048 <TIM_Base_SetConfig+0x38>
 8002028:	687b      	ldr	r3, [r7, #4]
 800202a:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 800202e:	d00b      	beq.n	8002048 <TIM_Base_SetConfig+0x38>
 8002030:	687b      	ldr	r3, [r7, #4]
 8002032:	4a34      	ldr	r2, [pc, #208]	@ (8002104 <TIM_Base_SetConfig+0xf4>)
 8002034:	4293      	cmp	r3, r2
 8002036:	d007      	beq.n	8002048 <TIM_Base_SetConfig+0x38>
 8002038:	687b      	ldr	r3, [r7, #4]
 800203a:	4a33      	ldr	r2, [pc, #204]	@ (8002108 <TIM_Base_SetConfig+0xf8>)
 800203c:	4293      	cmp	r3, r2
 800203e:	d003      	beq.n	8002048 <TIM_Base_SetConfig+0x38>
 8002040:	687b      	ldr	r3, [r7, #4]
 8002042:	4a32      	ldr	r2, [pc, #200]	@ (800210c <TIM_Base_SetConfig+0xfc>)
 8002044:	4293      	cmp	r3, r2
 8002046:	d108      	bne.n	800205a <TIM_Base_SetConfig+0x4a>
 8002048:	68fb      	ldr	r3, [r7, #12]
 800204a:	f023 0370 	bic.w	r3, r3, #112	@ 0x70
 800204e:	60fb      	str	r3, [r7, #12]
 8002050:	683b      	ldr	r3, [r7, #0]
 8002052:	685b      	ldr	r3, [r3, #4]
 8002054:	68fa      	ldr	r2, [r7, #12]
 8002056:	4313      	orrs	r3, r2
 8002058:	60fb      	str	r3, [r7, #12]
 800205a:	687b      	ldr	r3, [r7, #4]
 800205c:	4a28      	ldr	r2, [pc, #160]	@ (8002100 <TIM_Base_SetConfig+0xf0>)
 800205e:	4293      	cmp	r3, r2
 8002060:	d01b      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 8002062:	687b      	ldr	r3, [r7, #4]
 8002064:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 8002068:	d017      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 800206a:	687b      	ldr	r3, [r7, #4]
 800206c:	4a25      	ldr	r2, [pc, #148]	@ (8002104 <TIM_Base_SetConfig+0xf4>)
 800206e:	4293      	cmp	r3, r2
 8002070:	d013      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 8002072:	687b      	ldr	r3, [r7, #4]
 8002074:	4a24      	ldr	r2, [pc, #144]	@ (8002108 <TIM_Base_SetConfig+0xf8>)
 8002076:	4293      	cmp	r3, r2
 8002078:	d00f      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 800207a:	687b      	ldr	r3, [r7, #4]
 800207c:	4a23      	ldr	r2, [pc, #140]	@ (800210c <TIM_Base_SetConfig+0xfc>)
 800207e:	4293      	cmp	r3, r2
 8002080:	d00b      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 8002082:	687b      	ldr	r3, [r7, #4]
 8002084:	4a22      	ldr	r2, [pc, #136]	@ (8002110 <TIM_Base_SetConfig+0x100>)
 8002086:	4293      	cmp	r3, r2
 8002088:	d007      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 800208a:	687b      	ldr	r3, [r7, #4]
 800208c:	4a21      	ldr	r2, [pc, #132]	@ (8002114 <TIM_Base_SetConfig+0x104>)
 800208e:	4293      	cmp	r3, r2
 8002090:	d003      	beq.n	800209a <TIM_Base_SetConfig+0x8a>
 8002092:	687b      	ldr	r3, [r7, #4]
 8002094:	4a20      	ldr	r2, [pc, #128]	@ (8002118 <TIM_Base_SetConfig+0x108>)
 8002096:	4293      	cmp	r3, r2
 8002098:	d108      	bne.n	80020ac <TIM_Base_SetConfig+0x9c>
 800209a:	68fb      	ldr	r3, [r7, #12]
 800209c:	f423 7340 	bic.w	r3, r3, #768	@ 0x300
 80020a0:	60fb      	str	r3, [r7, #12]
 80020a2:	683b      	ldr	r3, [r7, #0]
 80020a4:	68db      	ldr	r3, [r3, #12]
 80020a6:	68fa      	ldr	r2, [r7, #12]
 80020a8:	4313      	orrs	r3, r2
 80020aa:	60fb      	str	r3, [r7, #12]
 80020ac:	68fb      	ldr	r3, [r7, #12]
 80020ae:	f023 0280 	bic.w	r2, r3, #128	@ 0x80
 80020b2:	683b      	ldr	r3, [r7, #0]
 80020b4:	695b      	ldr	r3, [r3, #20]
 80020b6:	4313      	orrs	r3, r2
 80020b8:	60fb      	str	r3, [r7, #12]
 80020ba:	683b      	ldr	r3, [r7, #0]
 80020bc:	689a      	ldr	r2, [r3, #8]
 80020be:	687b      	ldr	r3, [r7, #4]
 80020c0:	62da      	str	r2, [r3, #44]	@ 0x2c
 80020c2:	683b      	ldr	r3, [r7, #0]
 80020c4:	681a      	ldr	r2, [r3, #0]
 80020c6:	687b      	ldr	r3, [r7, #4]
 80020c8:	629a      	str	r2, [r3, #40]	@ 0x28
 80020ca:	687b      	ldr	r3, [r7, #4]
 80020cc:	4a0c      	ldr	r2, [pc, #48]	@ (8002100 <TIM_Base_SetConfig+0xf0>)
 80020ce:	4293      	cmp	r3, r2
 80020d0:	d103      	bne.n	80020da <TIM_Base_SetConfig+0xca>
 80020d2:	683b      	ldr	r3, [r7, #0]
 80020d4:	691a      	ldr	r2, [r3, #16]
 80020d6:	687b      	ldr	r3, [r7, #4]
 80020d8:	631a      	str	r2, [r3, #48]	@ 0x30
 80020da:	687b      	ldr	r3, [r7, #4]
 80020dc:	681b      	ldr	r3, [r3, #0]
 80020de:	f043 0204 	orr.w	r2, r3, #4
 80020e2:	687b      	ldr	r3, [r7, #4]
 80020e4:	601a      	str	r2, [r3, #0]
 80020e6:	687b      	ldr	r3, [r7, #4]
 80020e8:	2201      	movs	r2, #1
 80020ea:	615a      	str	r2, [r3, #20]
 80020ec:	687b      	ldr	r3, [r7, #4]
 80020ee:	68fa      	ldr	r2, [r7, #12]
 80020f0:	601a      	str	r2, [r3, #0]
 80020f2:	bf00      	nop
 80020f4:	3714      	adds	r7, #20
 80020f6:	46bd      	mov	sp, r7
 80020f8:	f85d 7b04 	ldr.w	r7, [sp], #4
 80020fc:	4770      	bx	lr
 80020fe:	bf00      	nop
 8002100:	40010000 	.word	0x40010000
 8002104:	40000400 	.word	0x40000400
 8002108:	40000800 	.word	0x40000800
 800210c:	40000c00 	.word	0x40000c00
 8002110:	40014000 	.word	0x40014000
 8002114:	40014400 	.word	0x40014400
 8002118:	40014800 	.word	0x40014800

0800211c <TIM_TI1_ConfigInputStage>:
 800211c:	b480      	push	{r7}
 800211e:	b087      	sub	sp, #28
 8002120:	af00      	add	r7, sp, #0
 8002122:	60f8      	str	r0, [r7, #12]
 8002124:	60b9      	str	r1, [r7, #8]
 8002126:	607a      	str	r2, [r7, #4]
 8002128:	68fb      	ldr	r3, [r7, #12]
 800212a:	6a1b      	ldr	r3, [r3, #32]
 800212c:	617b      	str	r3, [r7, #20]
 800212e:	68fb      	ldr	r3, [r7, #12]
 8002130:	6a1b      	ldr	r3, [r3, #32]
 8002132:	f023 0201 	bic.w	r2, r3, #1
 8002136:	68fb      	ldr	r3, [r7, #12]
 8002138:	621a      	str	r2, [r3, #32]
 800213a:	68fb      	ldr	r3, [r7, #12]
 800213c:	699b      	ldr	r3, [r3, #24]
 800213e:	613b      	str	r3, [r7, #16]
 8002140:	693b      	ldr	r3, [r7, #16]
 8002142:	f023 03f0 	bic.w	r3, r3, #240	@ 0xf0
 8002146:	613b      	str	r3, [r7, #16]
 8002148:	687b      	ldr	r3, [r7, #4]
 800214a:	011b      	lsls	r3, r3, #4
 800214c:	693a      	ldr	r2, [r7, #16]
 800214e:	4313      	orrs	r3, r2
 8002150:	613b      	str	r3, [r7, #16]
 8002152:	697b      	ldr	r3, [r7, #20]
 8002154:	f023 030a 	bic.w	r3, r3, #10
 8002158:	617b      	str	r3, [r7, #20]
 800215a:	697a      	ldr	r2, [r7, #20]
 800215c:	68bb      	ldr	r3, [r7, #8]
 800215e:	4313      	orrs	r3, r2
 8002160:	617b      	str	r3, [r7, #20]
 8002162:	68fb      	ldr	r3, [r7, #12]
 8002164:	693a      	ldr	r2, [r7, #16]
 8002166:	619a      	str	r2, [r3, #24]
 8002168:	68fb      	ldr	r3, [r7, #12]
 800216a:	697a      	ldr	r2, [r7, #20]
 800216c:	621a      	str	r2, [r3, #32]
 800216e:	bf00      	nop
 8002170:	371c      	adds	r7, #28
 8002172:	46bd      	mov	sp, r7
 8002174:	f85d 7b04 	ldr.w	r7, [sp], #4
 8002178:	4770      	bx	lr

0800217a <TIM_TI2_ConfigInputStage>:
 800217a:	b480      	push	{r7}
 800217c:	b087      	sub	sp, #28
 800217e:	af00      	add	r7, sp, #0
 8002180:	60f8      	str	r0, [r7, #12]
 8002182:	60b9      	str	r1, [r7, #8]
 8002184:	607a      	str	r2, [r7, #4]
 8002186:	68fb      	ldr	r3, [r7, #12]
 8002188:	6a1b      	ldr	r3, [r3, #32]
 800218a:	617b      	str	r3, [r7, #20]
 800218c:	68fb      	ldr	r3, [r7, #12]
 800218e:	6a1b      	ldr	r3, [r3, #32]
 8002190:	f023 0210 	bic.w	r2, r3, #16
 8002194:	68fb      	ldr	r3, [r7, #12]
 8002196:	621a      	str	r2, [r3, #32]
 8002198:	68fb      	ldr	r3, [r7, #12]
 800219a:	699b      	ldr	r3, [r3, #24]
 800219c:	613b      	str	r3, [r7, #16]
 800219e:	693b      	ldr	r3, [r7, #16]
 80021a0:	f423 4370 	bic.w	r3, r3, #61440	@ 0xf000
 80021a4:	613b      	str	r3, [r7, #16]
 80021a6:	687b      	ldr	r3, [r7, #4]
 80021a8:	031b      	lsls	r3, r3, #12
 80021aa:	693a      	ldr	r2, [r7, #16]
 80021ac:	4313      	orrs	r3, r2
 80021ae:	613b      	str	r3, [r7, #16]
 80021b0:	697b      	ldr	r3, [r7, #20]
 80021b2:	f023 03a0 	bic.w	r3, r3, #160	@ 0xa0
 80021b6:	617b      	str	r3, [r7, #20]
 80021b8:	68bb      	ldr	r3, [r7, #8]
 80021ba:	011b      	lsls	r3, r3, #4
 80021bc:	697a      	ldr	r2, [r7, #20]
 80021be:	4313      	orrs	r3, r2
 80021c0:	617b      	str	r3, [r7, #20]
 80021c2:	68fb      	ldr	r3, [r7, #12]
 80021c4:	693a      	ldr	r2, [r7, #16]
 80021c6:	619a      	str	r2, [r3, #24]
 80021c8:	68fb      	ldr	r3, [r7, #12]
 80021ca:	697a      	ldr	r2, [r7, #20]
 80021cc:	621a      	str	r2, [r3, #32]
 80021ce:	bf00      	nop
 80021d0:	371c      	adds	r7, #28
 80021d2:	46bd      	mov	sp, r7
 80021d4:	f85d 7b04 	ldr.w	r7, [sp], #4
 80021d8:	4770      	bx	lr

080021da <TIM_ITRx_SetConfig>:
 80021da:	b480      	push	{r7}
 80021dc:	b085      	sub	sp, #20
 80021de:	af00      	add	r7, sp, #0
 80021e0:	6078      	str	r0, [r7, #4]
 80021e2:	6039      	str	r1, [r7, #0]
 80021e4:	687b      	ldr	r3, [r7, #4]
 80021e6:	689b      	ldr	r3, [r3, #8]
 80021e8:	60fb      	str	r3, [r7, #12]
 80021ea:	68fb      	ldr	r3, [r7, #12]
 80021ec:	f023 0370 	bic.w	r3, r3, #112	@ 0x70
 80021f0:	60fb      	str	r3, [r7, #12]
 80021f2:	683a      	ldr	r2, [r7, #0]
 80021f4:	68fb      	ldr	r3, [r7, #12]
 80021f6:	4313      	orrs	r3, r2
 80021f8:	f043 0307 	orr.w	r3, r3, #7
 80021fc:	60fb      	str	r3, [r7, #12]
 80021fe:	687b      	ldr	r3, [r7, #4]
 8002200:	68fa      	ldr	r2, [r7, #12]
 8002202:	609a      	str	r2, [r3, #8]
 8002204:	bf00      	nop
 8002206:	3714      	adds	r7, #20
 8002208:	46bd      	mov	sp, r7
 800220a:	f85d 7b04 	ldr.w	r7, [sp], #4
 800220e:	4770      	bx	lr

08002210 <TIM_ETR_SetConfig>:
 8002210:	b480      	push	{r7}
 8002212:	b087      	sub	sp, #28
 8002214:	af00      	add	r7, sp, #0
 8002216:	60f8      	str	r0, [r7, #12]
 8002218:	60b9      	str	r1, [r7, #8]
 800221a:	607a      	str	r2, [r7, #4]
 800221c:	603b      	str	r3, [r7, #0]
 800221e:	68fb      	ldr	r3, [r7, #12]
 8002220:	689b      	ldr	r3, [r3, #8]
 8002222:	617b      	str	r3, [r7, #20]
 8002224:	697b      	ldr	r3, [r7, #20]
 8002226:	f423 437f 	bic.w	r3, r3, #65280	@ 0xff00
 800222a:	617b      	str	r3, [r7, #20]
 800222c:	683b      	ldr	r3, [r7, #0]
 800222e:	021a      	lsls	r2, r3, #8
 8002230:	687b      	ldr	r3, [r7, #4]
 8002232:	431a      	orrs	r2, r3
 8002234:	68bb      	ldr	r3, [r7, #8]
 8002236:	4313      	orrs	r3, r2
 8002238:	697a      	ldr	r2, [r7, #20]
 800223a:	4313      	orrs	r3, r2
 800223c:	617b      	str	r3, [r7, #20]
 800223e:	68fb      	ldr	r3, [r7, #12]
 8002240:	697a      	ldr	r2, [r7, #20]
 8002242:	609a      	str	r2, [r3, #8]
 8002244:	bf00      	nop
 8002246:	371c      	adds	r7, #28
 8002248:	46bd      	mov	sp, r7
 800224a:	f85d 7b04 	ldr.w	r7, [sp], #4
 800224e:	4770      	bx	lr

08002250 <HAL_TIMEx_MasterConfigSynchronization>:
 8002250:	b480      	push	{r7}
 8002252:	b085      	sub	sp, #20
 8002254:	af00      	add	r7, sp, #0
 8002256:	6078      	str	r0, [r7, #4]
 8002258:	6039      	str	r1, [r7, #0]
 800225a:	687b      	ldr	r3, [r7, #4]
 800225c:	f893 303c 	ldrb.w	r3, [r3, #60]	@ 0x3c
 8002260:	2b01      	cmp	r3, #1
 8002262:	d101      	bne.n	8002268 <HAL_TIMEx_MasterConfigSynchronization+0x18>
 8002264:	2302      	movs	r3, #2
 8002266:	e050      	b.n	800230a <HAL_TIMEx_MasterConfigSynchronization+0xba>
 8002268:	687b      	ldr	r3, [r7, #4]
 800226a:	2201      	movs	r2, #1
 800226c:	f883 203c 	strb.w	r2, [r3, #60]	@ 0x3c
 8002270:	687b      	ldr	r3, [r7, #4]
 8002272:	2202      	movs	r2, #2
 8002274:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8002278:	687b      	ldr	r3, [r7, #4]
 800227a:	681b      	ldr	r3, [r3, #0]
 800227c:	685b      	ldr	r3, [r3, #4]
 800227e:	60fb      	str	r3, [r7, #12]
 8002280:	687b      	ldr	r3, [r7, #4]
 8002282:	681b      	ldr	r3, [r3, #0]
 8002284:	689b      	ldr	r3, [r3, #8]
 8002286:	60bb      	str	r3, [r7, #8]
 8002288:	68fb      	ldr	r3, [r7, #12]
 800228a:	f023 0370 	bic.w	r3, r3, #112	@ 0x70
 800228e:	60fb      	str	r3, [r7, #12]
 8002290:	683b      	ldr	r3, [r7, #0]
 8002292:	681b      	ldr	r3, [r3, #0]
 8002294:	68fa      	ldr	r2, [r7, #12]
 8002296:	4313      	orrs	r3, r2
 8002298:	60fb      	str	r3, [r7, #12]
 800229a:	687b      	ldr	r3, [r7, #4]
 800229c:	681b      	ldr	r3, [r3, #0]
 800229e:	68fa      	ldr	r2, [r7, #12]
 80022a0:	605a      	str	r2, [r3, #4]
 80022a2:	687b      	ldr	r3, [r7, #4]
 80022a4:	681b      	ldr	r3, [r3, #0]
 80022a6:	4a1c      	ldr	r2, [pc, #112]	@ (8002318 <HAL_TIMEx_MasterConfigSynchronization+0xc8>)
 80022a8:	4293      	cmp	r3, r2
 80022aa:	d018      	beq.n	80022de <HAL_TIMEx_MasterConfigSynchronization+0x8e>
 80022ac:	687b      	ldr	r3, [r7, #4]
 80022ae:	681b      	ldr	r3, [r3, #0]
 80022b0:	f1b3 4f80 	cmp.w	r3, #1073741824	@ 0x40000000
 80022b4:	d013      	beq.n	80022de <HAL_TIMEx_MasterConfigSynchronization+0x8e>
 80022b6:	687b      	ldr	r3, [r7, #4]
 80022b8:	681b      	ldr	r3, [r3, #0]
 80022ba:	4a18      	ldr	r2, [pc, #96]	@ (800231c <HAL_TIMEx_MasterConfigSynchronization+0xcc>)
 80022bc:	4293      	cmp	r3, r2
 80022be:	d00e      	beq.n	80022de <HAL_TIMEx_MasterConfigSynchronization+0x8e>
 80022c0:	687b      	ldr	r3, [r7, #4]
 80022c2:	681b      	ldr	r3, [r3, #0]
 80022c4:	4a16      	ldr	r2, [pc, #88]	@ (8002320 <HAL_TIMEx_MasterConfigSynchronization+0xd0>)
 80022c6:	4293      	cmp	r3, r2
 80022c8:	d009      	beq.n	80022de <HAL_TIMEx_MasterConfigSynchronization+0x8e>
 80022ca:	687b      	ldr	r3, [r7, #4]
 80022cc:	681b      	ldr	r3, [r3, #0]
 80022ce:	4a15      	ldr	r2, [pc, #84]	@ (8002324 <HAL_TIMEx_MasterConfigSynchronization+0xd4>)
 80022d0:	4293      	cmp	r3, r2
 80022d2:	d004      	beq.n	80022de <HAL_TIMEx_MasterConfigSynchronization+0x8e>
 80022d4:	687b      	ldr	r3, [r7, #4]
 80022d6:	681b      	ldr	r3, [r3, #0]
 80022d8:	4a13      	ldr	r2, [pc, #76]	@ (8002328 <HAL_TIMEx_MasterConfigSynchronization+0xd8>)
 80022da:	4293      	cmp	r3, r2
 80022dc:	d10c      	bne.n	80022f8 <HAL_TIMEx_MasterConfigSynchronization+0xa8>
 80022de:	68bb      	ldr	r3, [r7, #8]
 80022e0:	f023 0380 	bic.w	r3, r3, #128	@ 0x80
 80022e4:	60bb      	str	r3, [r7, #8]
 80022e6:	683b      	ldr	r3, [r7, #0]
 80022e8:	685b      	ldr	r3, [r3, #4]
 80022ea:	68ba      	ldr	r2, [r7, #8]
 80022ec:	4313      	orrs	r3, r2
 80022ee:	60bb      	str	r3, [r7, #8]
 80022f0:	687b      	ldr	r3, [r7, #4]
 80022f2:	681b      	ldr	r3, [r3, #0]
 80022f4:	68ba      	ldr	r2, [r7, #8]
 80022f6:	609a      	str	r2, [r3, #8]
 80022f8:	687b      	ldr	r3, [r7, #4]
 80022fa:	2201      	movs	r2, #1
 80022fc:	f883 203d 	strb.w	r2, [r3, #61]	@ 0x3d
 8002300:	687b      	ldr	r3, [r7, #4]
 8002302:	2200      	movs	r2, #0
 8002304:	f883 203c 	strb.w	r2, [r3, #60]	@ 0x3c
 8002308:	2300      	movs	r3, #0
 800230a:	4618      	mov	r0, r3
 800230c:	3714      	adds	r7, #20
 800230e:	46bd      	mov	sp, r7
 8002310:	f85d 7b04 	ldr.w	r7, [sp], #4
 8002314:	4770      	bx	lr
 8002316:	bf00      	nop
 8002318:	40010000 	.word	0x40010000
 800231c:	40000400 	.word	0x40000400
 8002320:	40000800 	.word	0x40000800
 8002324:	40000c00 	.word	0x40000c00
 8002328:	40014000 	.word	0x40014000

0800232c <HAL_TIMEx_CommutCallback>:
 800232c:	b480      	push	{r7}
 800232e:	b083      	sub	sp, #12
 8002330:	af00      	add	r7, sp, #0
 8002332:	6078      	str	r0, [r7, #4]
 8002334:	bf00      	nop
 8002336:	370c      	adds	r7, #12
 8002338:	46bd      	mov	sp, r7
 800233a:	f85d 7b04 	ldr.w	r7, [sp], #4
 800233e:	4770      	bx	lr

08002340 <HAL_TIMEx_BreakCallback>:
 8002340:	b480      	push	{r7}
 8002342:	b083      	sub	sp, #12
 8002344:	af00      	add	r7, sp, #0
 8002346:	6078      	str	r0, [r7, #4]
 8002348:	bf00      	nop
 800234a:	370c      	adds	r7, #12
 800234c:	46bd      	mov	sp, r7
 800234e:	f85d 7b04 	ldr.w	r7, [sp], #4
 8002352:	4770      	bx	lr

08002354 <memset>:
 8002354:	4402      	add	r2, r0
 8002356:	4603      	mov	r3, r0
 8002358:	4293      	cmp	r3, r2
 800235a:	d100      	bne.n	800235e <memset+0xa>
 800235c:	4770      	bx	lr
 800235e:	f803 1b01 	strb.w	r1, [r3], #1
 8002362:	e7f9      	b.n	8002358 <memset+0x4>

08002364 <__libc_init_array>:
 8002364:	b570      	push	{r4, r5, r6, lr}
 8002366:	4d0d      	ldr	r5, [pc, #52]	@ (800239c <__libc_init_array+0x38>)
 8002368:	4c0d      	ldr	r4, [pc, #52]	@ (80023a0 <__libc_init_array+0x3c>)
 800236a:	1b64      	subs	r4, r4, r5
 800236c:	10a4      	asrs	r4, r4, #2
 800236e:	2600      	movs	r6, #0
 8002370:	42a6      	cmp	r6, r4
 8002372:	d109      	bne.n	8002388 <__libc_init_array+0x24>
 8002374:	4d0b      	ldr	r5, [pc, #44]	@ (80023a4 <__libc_init_array+0x40>)
 8002376:	4c0c      	ldr	r4, [pc, #48]	@ (80023a8 <__libc_init_array+0x44>)
 8002378:	f000 f818 	bl	80023ac <_init>
 800237c:	1b64      	subs	r4, r4, r5
 800237e:	10a4      	asrs	r4, r4, #2
 8002380:	2600      	movs	r6, #0
 8002382:	42a6      	cmp	r6, r4
 8002384:	d105      	bne.n	8002392 <__libc_init_array+0x2e>
 8002386:	bd70      	pop	{r4, r5, r6, pc}
 8002388:	f855 3b04 	ldr.w	r3, [r5], #4
 800238c:	4798      	blx	r3
 800238e:	3601      	adds	r6, #1
 8002390:	e7ee      	b.n	8002370 <__libc_init_array+0xc>
 8002392:	f855 3b04 	ldr.w	r3, [r5], #4
 8002396:	4798      	blx	r3
 8002398:	3601      	adds	r6, #1
 800239a:	e7f2      	b.n	8002382 <__libc_init_array+0x1e>
 800239c:	080023e8 	.word	0x080023e8
 80023a0:	080023e8 	.word	0x080023e8
 80023a4:	080023e8 	.word	0x080023e8
 80023a8:	080023ec 	.word	0x080023ec

080023ac <_init>:
 80023ac:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 80023ae:	bf00      	nop
 80023b0:	bcf8      	pop	{r3, r4, r5, r6, r7}
 80023b2:	bc08      	pop	{r3}
 80023b4:	469e      	mov	lr, r3
 80023b6:	4770      	bx	lr

080023b8 <_fini>:
 80023b8:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 80023ba:	bf00      	nop
 80023bc:	bcf8      	pop	{r3, r4, r5, r6, r7}
 80023be:	bc08      	pop	{r3}
 80023c0:	469e      	mov	lr, r3
 80023c2:	4770      	bx	lr
