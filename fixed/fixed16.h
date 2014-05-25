/**
 * @file fixed16.h
 * Библиотека для работы с 16 битными числами с фиксированной запятой.
 */

#ifndef FIXED16_H
#define	FIXED16_H

#include "fixed.h"

/*
 * fixed16.
 * 16 бит.
 * 8 бит + 8 бит.
 */
#define FIXED16_SIZE_BITS  16
#define FIXED16_INT_BITS   8
#define FIXED16_FRACT_BITS 8

//! Тип fixed_int16_t.
typedef fixed_make_stdint_type(FIXED16_SIZE_BITS)       fixed_make_int_type(  FIXED16_SIZE_BITS);
//! Тип fixed16_t.
typedef fixed_make_stdint_type(FIXED16_SIZE_BITS)       fixed_make_type(      FIXED16_SIZE_BITS);

/*
 * Макросы для fixed16.
 * Описание см. fixed.h (@see fixed.h).
 */
#define fixed16_make_from_int(int_n)                    fixed_make_from_int_bits(int_n,                 FIXED16_FRACT_BITS)
#define fixed16_make_from_fract(dividend, divider)      fixed_make_from_fract_bits(dividend, divider,   FIXED16_FRACT_BITS)
#define fixed16_round(f)                                fixed_round_bits(f,                             FIXED16_INT_BITS, FIXED16_FRACT_BITS)
#define fixed16_get_int(f)                              fixed_get_int_bits(f,                           FIXED16_FRACT_BITS)
#define fixed16_get_fract_denom()                       fixed_get_fract_denom_bits(                     FIXED16_FRACT_BITS)
#define fixed16_get_fract(f)                            fixed_get_fract_bits(f,                         FIXED16_FRACT_BITS)
#define fixed16_get_fract_by_denom(f, base)             fixed_get_fract_by_denom_bits(f, base,          FIXED16_FRACT_BITS)

/*
 * Макросы по-умолчанию.
 */
#if defined(FIXED16_IS_DEFAULT) || defined(FIXED16_DEFAULT)
typedef fixed16_t       fixed_t;
typedef fixed_int16_t   fixed_int_t;
#define fixed_make_from_int(int_n)                    fixed16_make_from_int(int_n)
#define fixed_make_from_fract(dividend, divider)      fixed16_make_from_fract(dividend, divider)
#define fixed_round(f)                                fixed16_round(f)
#define fixed_get_int(f)                              fixed16_get_int(f)
#define fixed_get_fract_denom()                       fixed16_get_fract_denom()
#define fixed_get_fract(f)                            fixed16_get_fract(f)
#define fixed_get_fract_by_denom(f, base)             fixed16_get_fract_by_denom(f, base)
#endif


/*
 * fixed12_4.
 * 16 бит.
 * 12 бит + 4 бит.
 */
#define FIXED12_4_SIZE_BITS  16
#define FIXED12_4_INT_BITS   12
#define FIXED12_4_FRACT_BITS 4

//! Тип fixed_int12_4_t.
typedef fixed_make_stdint_type(FIXED12_4_SIZE_BITS)       fixed_make_int_type2( FIXED12_4_INT_BITS, FIXED12_4_FRACT_BITS);
//! Тип fixed12_4_t.
typedef fixed_make_stdint_type(FIXED12_4_SIZE_BITS)       fixed_make_type2(     FIXED12_4_INT_BITS, FIXED12_4_FRACT_BITS);

/*
 * Макросы для fixed12_4.
 * Описание см. fixed.h (@see fixed.h).
 */
#define fixed12_4_make_from_int(int_n)                    fixed_make_from_int_bits(int_n,                 FIXED12_4_FRACT_BITS)
#define fixed12_4_make_from_fract(dividend, divider)      fixed_make_from_fract_bits(dividend, divider,   FIXED12_4_FRACT_BITS)
#define fixed12_4_round(f)                                fixed_round_bits(f,                             FIXED12_4_INT_BITS, FIXED12_4_FRACT_BITS)
#define fixed12_4_get_int(f)                              fixed_get_int_bits(f,                           FIXED12_4_FRACT_BITS)
#define fixed12_4_get_fract_denom()                       fixed_get_fract_denom_bits(                     FIXED12_4_FRACT_BITS)
#define fixed12_4_get_fract(f)                            fixed_get_fract_bits(f,                         FIXED12_4_FRACT_BITS)
#define fixed12_4_get_fract_by_denom(f, base)             fixed_get_fract_by_denom_bits(f, base,          FIXED12_4_FRACT_BITS)

/*
 * Макросы по-умолчанию.
 */
#if defined(FIXED12_4_IS_DEFAULT) || defined(FIXED12_4_DEFAULT)
typedef fixed12_4_t       fixed_t;
typedef fixed_int12_4_t   fixed_int_t;
#define fixed_make_from_int(int_n)                    fixed12_4_make_from_int(int_n)
#define fixed_make_from_fract(dividend, divider)      fixed12_4_make_from_fract(dividend, divider)
#define fixed_round(f)                                fixed12_4_round(f)
#define fixed_get_int(f)                              fixed12_4_get_int(f)
#define fixed_get_fract_denom()                       fixed12_4_get_fract_denom()
#define fixed_get_fract(f)                            fixed12_4_get_fract(f)
#define fixed_get_fract_by_denom(f, base)             fixed12_4_get_fract_by_denom(f, base)
#endif


/*
 * fixed4_12.
 * 16 бит.
 * 4 бит + 12 бит.
 */
#define FIXED4_12_SIZE_BITS  16
#define FIXED4_12_INT_BITS   4
#define FIXED4_12_FRACT_BITS 12

//! Тип fixed_int4_12_t.
typedef fixed_make_stdint_type(FIXED4_12_SIZE_BITS)       fixed_make_int_type2( FIXED4_12_INT_BITS, FIXED4_12_FRACT_BITS);
//! Тип fixed4_12_t.
typedef fixed_make_stdint_type(FIXED4_12_SIZE_BITS)       fixed_make_type2(     FIXED4_12_INT_BITS, FIXED4_12_FRACT_BITS);

/*
 * Макросы для fixed4_12.
 * Описание см. fixed.h (@see fixed.h).
 */
#define fixed4_12_make_from_int(int_n)                    fixed_make_from_int_bits(int_n,                 FIXED4_12_FRACT_BITS)
#define fixed4_12_make_from_fract(dividend, divider)      fixed_make_from_fract_bits(dividend, divider,   FIXED4_12_FRACT_BITS)
#define fixed4_12_round(f)                                fixed_round_bits(f,                             FIXED4_12_INT_BITS, FIXED4_12_FRACT_BITS)
#define fixed4_12_get_int(f)                              fixed_get_int_bits(f,                           FIXED4_12_FRACT_BITS)
#define fixed4_12_get_fract_denom()                       fixed_get_fract_denom_bits(                     FIXED4_12_FRACT_BITS)
#define fixed4_12_get_fract(f)                            fixed_get_fract_bits(f,                         FIXED4_12_FRACT_BITS)
#define fixed4_12_get_fract_by_denom(f, base)             fixed_get_fract_by_denom_bits(f, base,          FIXED4_12_FRACT_BITS)

/*
 * Макросы по-умолчанию.
 */
#if defined(FIXED4_12_IS_DEFAULT) || defined(FIXED4_12_DEFAULT)
typedef fixed4_12_t       fixed_t;
typedef fixed_int4_12_t   fixed_int_t;
#define fixed_make_from_int(int_n)                    fixed4_12_make_from_int(int_n)
#define fixed_make_from_fract(dividend, divider)      fixed4_12_make_from_fract(dividend, divider)
#define fixed_round(f)                                fixed4_12_round(f)
#define fixed_get_int(f)                              fixed4_12_get_int(f)
#define fixed_get_fract_denom()                       fixed4_12_get_fract_denom()
#define fixed_get_fract(f)                            fixed4_12_get_fract(f)
#define fixed_get_fract_by_denom(f, base)             fixed4_12_get_fract_by_denom(f, base)
#endif

#endif	/* FIXED16_H */

