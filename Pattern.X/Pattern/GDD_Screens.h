
/*****************************************************************************
* Microchip Graphics Library
* Graphics Display Designer (GDD) Template
*****************************************************************************
 
* Dependencies:    See INCLUDES section below
* Processor:       PIC24F, PIC24H, dsPIC, PIC32
* Compiler:        MPLAB C30 V3.22, MPLAB C32 V1.05b
* Linker:          MPLAB LINK30, MPLAB LINK32
* Company:         Microchip Technology Incorporated
*
* Software License Agreement
*
* Copyright (c) 2010 Microchip Technology Inc.  All rights reserved.
* Microchip licenses to you the right to use, modify, copy and distribute
* Software only when embedded on a Microchip microcontroller or digital
* signal controller, which is integrated into your product or third party
* product (pursuant to the sublicense terms in the accompanying license
* agreement).  
*
* You should refer to the license agreement accompanying this Software
* for additional information regarding your rights and obligations.
*
* SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY
* KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
* OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
* PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
* OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 
* BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
* DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
* INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
* COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
* CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
* OR OTHER SIMILAR COSTS.
*
* Author               Date        Comment
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
*****************************************************************************/


#ifndef    _GDD_SCREENS_H_
#define    _GDD_SCREENS_H_


/***************************************************
*FUNCTION DECLARATION
***************************************************/

void GDDDemoCreateFirstScreen(void);
void GDDDemoGOLDrawCallback(void);
void GDDDemoNextScreen(void);
void GDDDemoGoToScreen(int screenIndex);
void GDDDemoGOLMsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg);


/***************************************************
*IMAGE DECLARATION
***************************************************/
extern const IMAGE_FLASH logo_small2_db2;
extern const IMAGE_FLASH No_Train;
extern const IMAGE_FLASH IR_Logo_small_4_DB2;
extern const IMAGE_FLASH log_bmp_blue_t_dark2;
extern const IMAGE_FLASH logo_small2_db2_inv;


/***************************************************
*FONT DECLARATION
***************************************************/
extern const FONT_FLASH Times_New_Roman_12;
extern const FONT_FLASH Handel_Gothic_22;
extern const FONT_FLASH Book_Antiqua_18;
extern const FONT_FLASH Monospaced_bold_Bold_14_1;
extern const FONT_FLASH Calibri_Light_18;
extern const FONT_FLASH Calibri_Bold_14;
extern const FONT_FLASH Gentium_16;


/***************************************************
*SCREEN DECLARATION
***************************************************/
void CreateHome(void);
void CreatePrimitivesForHome(void);
void CreateCPU_3D2S(void);
void CreateCPU_2DP(void);
void CreatePrimitivesForCPU_2DP(void);
void CreateCPU_3DP_AS(void);
void CreatePrimitivesForCPU_3DP_AS(void);
void CreateCPU_LCWS(void);
void CreateSMCPU(void);
void CreateRESET(void);
void CreateWAIT_FOR_RESET(void);
void CreateCPU_DE(void);
void CreatePrimitivesForCPU_DE(void);
void CreateCPU_4D1S(void);



/***************************************************
*UNIQUE WIDGET ID'S
***************************************************/
#define PCB_253 1
#define STE_611 2
#define STE_89 3
#define STE_90 4
#define STE_91 5
#define STE_92 6
#define STE_93 7
#define STE_94 8
#define STE_95 9
#define PCB_214 10
#define PCB_82 11
#define BTN_276 12
#define BTN_277 13
#define BTN_278 14
#define BTN_279 15
#define STE_281 16
#define STE_283 17
#define STE_284 18
#define STE_285 19
#define STE_286 20
#define STE_287 21
#define STE_289 22
#define STE_290 23
#define STE_291 24
#define STE_292 25
#define STE_293 26
#define STE_294 27
#define STE_312 28
#define STE_313 29
#define STE_314 30
#define STE_315 31
#define STE_316 32
#define STE_317 33
#define STE_325 34
#define STE_326 35
#define STE_327 36
#define STE_329 37
#define STE_330 38
#define STE_331 39
#define STE_334 40
#define STE_335 41
#define PCB_336 42
#define PCB_337 43
#define RDB_366 44
#define RDB_367 45
#define RDB_368 46
#define STE_503 47
#define STE_504 48
#define STE_505 49
#define STE_506 50
#define STE_507 51
#define STE_508 52
#define STE_509 53
#define STE_510 54
#define BTN_149 55
#define BTN_151 56
#define BTN_152 57
#define BTN_153 58
#define STE_157 59
#define STE_158 60
#define STE_159 61
#define STE_163 62
#define STE_164 63
#define STE_165 64
#define STE_166 65
#define STE_175 66
#define STE_176 67
#define STE_177 68
#define STE_179 69
#define PCB_204 70
#define PCB_205 71
#define PCB_215 72
#define STE_196 73
#define STE_302 74
#define STE_303 75
#define STE_304 76
#define STE_305 77
#define STE_306 78
#define STE_307 79
#define STE_308 80
#define STE_309 81
#define STE_266 82
#define STE_267 83
#define STE_269 84
#define STE_270 85
#define STE_272 86
#define STE_273 87
#define STE_274 88
#define RDB_439 89
#define RDB_484 90
#define STE_203 91
#define STE_204 92
#define STE_205 93
#define STE_206 94
#define STE_207 95
#define STE_208 96
#define STE_209 97
#define PCB_206 98
#define PCB_216 99
#define STE_338 100
#define STE_339 101
#define STE_340 102
#define STE_341 103
#define STE_350 104
#define STE_351 105
#define STE_352 106
#define STE_356 107
#define STE_357 108
#define STE_372 109
#define STE_373 110
#define STE_374 111
#define STE_376 112
#define STE_377 113
#define STE_378 114
#define BTN_379 115
#define BTN_380 116
#define BTN_381 117
#define BTN_382 118
#define STE_467 119
#define STE_468 120
#define STE_469 121
#define STE_470 122
#define STE_471 123
#define STE_472 124
#define STE_473 125
#define STE_474 126
#define STE_369 127
#define STE_370 128
#define STE_371 129
#define STE_375 130
#define PCB_377 131
#define PCB_378 132
#define PCB_379 133
#define RDB_380 134
#define RDB_381 135
#define RDB_382 136
#define STE_222 137
#define STE_223 138
#define STE_224 139
#define STE_225 140
#define STE_226 141
#define STE_227 142
#define STE_228 143
#define PCB_209 144
#define PCB_217 145
#define STE_384 146
#define STE_385 147
#define STE_386 148
#define STE_387 149
#define STE_388 150
#define STE_390 151
#define STE_391 152
#define STE_392 153
#define STE_393 154
#define STE_394 155
#define STE_395 156
#define STE_396 157
#define STE_397 158
#define STE_398 159
#define STE_399 160
#define STE_400 161
#define STE_401 162
#define STE_402 163
#define STE_403 164
#define STE_404 165
#define STE_405 166
#define STE_406 167
#define STE_407 168
#define STE_408 169
#define STE_410 170
#define STE_416 171
#define BTN_419 172
#define BTN_420 173
#define BTN_421 174
#define BTN_422 175
#define PCB_424 176
#define PCB_434 177
#define RDB_389 178
#define RDB_390 179
#define RDB_391 180
#define RDB_392 181
#define BTN_161 182
#define BTN_165 183
#define STE_167 184
#define STE_168 185
#define STE_170 186
#define STE_171 187
#define STE_172 188
#define STE_173 189
#define GRB_193 190
#define STE_243 191
#define STE_244 192
#define STE_245 193
#define STE_246 194
#define STE_247 195
#define STE_248 196
#define PCB_213 197
#define PCB_218 198
#define STE_169 199
#define STE_609 200
#define STE_610 201
#define STE_612 202
#define STE_613 203
#define BTN_201 204
#define STE_211 205
#define STE_249 206
#define STE_250 207
#define STE_252 208
#define STE_253 209
#define STE_254 210
#define STE_256 211
#define PCB_268 212
#define PCB_269 213
#define STE_419 214
#define STE_420 215
#define STE_421 216
#define STE_422 217
#define STE_423 218
#define STE_424 219
#define STE_425 220
#define STE_426 221
#define STE_427 222
#define STE_428 223
#define STE_429 224
#define STE_430 225
#define STE_431 226
#define STE_432 227
#define STE_433 228
#define STE_434 229
#define STE_437 230
#define STE_438 231
#define STE_439 232
#define STE_440 233
#define STE_441 234
#define STE_442 235
#define STE_443 236
#define STE_444 237
#define STE_445 238
#define STE_446 239
#define STE_447 240
#define STE_448 241
#define STE_449 242
#define STE_450 243
#define STE_451 244
#define STE_452 245
#define STE_453 246
#define STE_454 247
#define STE_455 248
#define STE_456 249
#define STE_457 250
#define STE_458 251
#define STE_459 252
#define STE_460 253
#define STE_461 254
#define STE_462 255
#define STE_463 256
#define STE_464 257
#define STE_465 258
#define STE_466 259
#define STE_475 260
#define STE_476 261
#define STE_477 262
#define STE_478 263
#define STE_479 264
#define STE_480 265
#define STE_481 266
#define STE_482 267
#define STE_483 268
#define BTN_484 269
#define BTN_485 270
#define BTN_486 271
#define BTN_487 272
#define STE_488 273
#define STE_489 274
#define STE_490 275
#define STE_491 276
#define STE_492 277
#define STE_493 278
#define STE_494 279
#define STE_495 280
#define STE_496 281
#define PCB_499 282
#define PCB_501 283
#define STE_511 284
#define STE_497 285
#define STE_501 286
#define STE_502 287
#define STE_417 288
#define STE_418 289
#define BTN_423 290
#define BTN_424 291
#define BTN_425 292
#define BTN_426 293
#define STE_484 294
#define STE_485 295
#define STE_486 296
#define STE_487 297
#define STE_498 298
#define STE_499 299
#define STE_500 300
#define STE_512 301
#define STE_513 302
#define STE_515 303
#define PCB_516 304
#define PCB_517 305
#define PCB_518 306
#define STE_519 307
#define STE_520 308
#define STE_521 309
#define STE_529 310
#define STE_530 311
#define STE_531 312
#define RDB_535 313
#define STE_528 314
#define STE_532 315
#define STE_533 316
#define STE_534 317
#define STE_535 318
#define STE_536 319
#define STE_537 320
#define PCB_538 321
#define PCB_539 322
#define STE_544 323
#define STE_545 324
#define STE_546 325
#define STE_549 326
#define BTN_555 327
#define BTN_556 328
#define BTN_557 329
#define BTN_558 330
#define STE_564 331
#define STE_567 332
#define STE_568 333
#define STE_583 334
#define STE_584 335
#define STE_585 336
#define STE_586 337
#define STE_587 338
#define STE_588 339
#define STE_589 340
#define STE_590 341
#define STE_591 342
#define STE_592 343
#define STE_593 344
#define STE_594 345
#define STE_595 346
#define STE_596 347
#define STE_597 348
#define STE_598 349
#define STE_599 350
#define STE_600 351
#define STE_601 352
#define STE_602 353
#define STE_603 354
#define STE_604 355
#define STE_605 356
#define RDB_608 357
#define RDB_610 358
#define PCB_611 359
#define RDB_612 360
#define PCB_613 361
#define RDB_614 362
#define STE_615 363
#define STE_616 364

#define	NUM_GDD_SCREENS 10
#endif
