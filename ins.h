
typedef enum {
    INHERENT,
    IMMEDIATE,
    DIRECT,
    INDEXED,
    SP_INDEXED,
    INDIRECT,
    RELATIVE,
    BIT_OPERATION
} Adressing_Mode;

typedef enum {
    NONE=0,
    REG_A, REG_XL, REG_YL, REG_XH, REG_YH, REG_CC, REG_X, REG_Y, REG_SP,
    PTR_X, PTR_Y,
    IMM_BYTE_2, IMM_WORD_23,
    SHORTMEM_2, SHORTMEM_3, LONGMEM_23, LONGMEM_34, LONGMEM_45, EXTMEM_234,
    SHORTOFF_2, SHORTOFF_4,
    SHORTOFF_X_2, SHORTOFF_Y_2, SHORTOFF_SP_2,
    LONGOFF_X_23, LONGOFF_Y_23,
    EXTOFF_X_234, EXTOFF_Y_234,
    SHORTPTR_2, LONGPTR_23,
    SHORTPTR_OFF_X_2, SHORTPTR_OFF_Y_2,
    LONGPTR_OFF_X_23, LONGPTR_OFF_Y_23,
    LONGMEM_BIT_123
} Ins_Operand;

typedef struct {
    char     text[8];
    uint8_t  des;
    uint8_t  src;
    uint16_t size;
} instruction;    //12-byte

static const instruction ins_table[]={
    {"neg  ", SHORTOFF_SP_2, 0, 2},
    {"rrwa ", REG_X, REG_A, 1},
    {"rlwa ", REG_X, REG_A, 1},
    {"cpl  ", SHORTOFF_SP_2, 0, 2},
    {"sra  ", SHORTOFF_SP_2, 0, 2},
    {"void ", 0, 0, 0},
    {"rrc  ", SHORTOFF_SP_2, 0, 2},
    {"sra  ", SHORTOFF_SP_2, 0, 2},
    {"sll  ", SHORTOFF_SP_2, 0, 2},
    {"rlc  ", SHORTOFF_SP_2, 0, 2},
    {"dec  ", SHORTOFF_SP_2, 0, 2},
    {"void ", 0, 0, 0},
    {"inc  ", SHORTOFF_SP_2, 0, 2},
    {"tnz  ", SHORTOFF_SP_2, 0, 2},
    {"swap ", SHORTOFF_SP_2, 0, 2},
    {"clr  ", SHORTOFF_SP_2, 0, 2},
    {"sub  ", REG_A, SHORTOFF_SP_2, 2},
    {"cp   ", REG_A, SHORTOFF_SP_2, 2},
    {"sbc  ", REG_A, SHORTOFF_SP_2, 2},
    {"cpw  ", REG_X, SHORTOFF_SP_2, 2},
    {"and  ", REG_A, SHORTOFF_SP_2, 2},
    {"bcp  ", REG_A, SHORTOFF_SP_2, 2},
    {"ldw  ", REG_Y, SHORTOFF_SP_2, 2},
    {"ldw  ", SHORTOFF_SP_2, REG_Y, 2},
    {"xor  ", REG_A, SHORTOFF_SP_2, 2},
    {"adc  ", REG_A, SHORTOFF_SP_2, 2},
    {"or   ", REG_A, SHORTOFF_SP_2, 2},
    {"add  ", REG_A, SHORTOFF_SP_2, 2},
    {"addw ", REG_X, IMM_WORD_23, 3},
    {"subw ", REG_X, IMM_WORD_23, 3},
    {"ldw  ", REG_X, SHORTOFF_SP_2, 2},
    {"ldw  ", SHORTOFF_SP_2, REG_X, 2},
    {"jra  ", SHORTOFF_2, 0, 2},
    {"jrf  ", SHORTOFF_2, 0, 2},
    {"jrugt", SHORTOFF_2, 0, 2},
    {"jrule", SHORTOFF_2, 0, 2},
    {"jrnc ", SHORTOFF_2, 0, 2},
    {"jrc  ", SHORTOFF_2, 0, 2},
    {"jrne ", SHORTOFF_2, 0, 2},
    {"jreq ", SHORTOFF_2, 0, 2},
    {"jrnv ", SHORTOFF_2, 0, 2},
    {"jrv  ", SHORTOFF_2, 0, 2},
    {"jrpl ", SHORTOFF_2, 0, 2},
    {"jrmi ", SHORTOFF_2, 0, 2},
    {"jrsgt", SHORTOFF_2, 0, 2},
    {"jrsle", SHORTOFF_2, 0, 2},
    {"jrsge", SHORTOFF_2, 0, 2},
    {"jrslt", SHORTOFF_2, 0, 2},
    {"neg  ", SHORTMEM_2, 0, 2},
    {"exg  ", REG_A, LONGMEM_23, 3},
    {"pop  ", LONGMEM_23, 0, 3},
    {"cpl  ", SHORTMEM_2, 0, 2},
    {"sra  ", SHORTMEM_2, 0, 2},
    {"mov  ", LONGMEM_34, IMM_BYTE_2, 4},
    {"rrc  ", SHORTMEM_2, 0, 2},
    {"sra  ", SHORTMEM_2, 0, 2},
    {"sll  ", SHORTMEM_2, 0, 2},
    {"rlc  ", SHORTMEM_2, 0, 2},
    {"dec  ", SHORTMEM_2, 0, 2},
    {"push ", LONGMEM_23, 0, 3},
    {"inc  ", SHORTMEM_2, 0, 2},
    {"tnz  ", SHORTMEM_2, 0, 2},
    {"swap ", SHORTMEM_2, 0, 2},
    {"clr  ", SHORTMEM_2, 0, 2},
    {"neg  ", REG_A, 0, 1},
    {"exg  ", REG_A, REG_XL, 1},
    {"mul  ", REG_X, REG_A, 1},
    {"cpl  ", REG_A, 0, 1},
    {"sra  ", REG_A, 0, 1},
    {"mov  ", SHORTMEM_3, SHORTMEM_2, 3},
    {"rrc  ", REG_A, 0, 1},
    {"sra  ", REG_A, 0, 1},
    {"sll  ", REG_A, 0, 1},
    {"rlc  ", REG_A, 0, 1},
    {"dec  ", REG_A, 0, 1},
    {"push ", IMM_BYTE_2, 0, 2},
    {"inc  ", REG_A, 0, 1},
    {"tnz  ", REG_A, 0, 1},
    {"swap ", REG_A, 0, 1},
    {"clr  ", REG_A, 0, 1},
    {"negw ", REG_X, 0, 1},
    {"exgw ", REG_X, REG_Y, 1},
    {"sub  ", REG_SP, IMM_BYTE_2, 2},
    {"cplw ", REG_X, 0, 1},
    {"srlw ", REG_X, 0, 1},
    {"mov  ", LONGMEM_45, LONGMEM_23, 5},
    {"rrcw ", REG_X, 0, 1},
    {"sraw ", REG_X, 0, 1},
    {"sllw ", REG_X, 0, 1},
    {"rlcw ", REG_X, 0, 1},
    {"decw ", REG_X, 0, 1},
    {"add  ", REG_SP, IMM_BYTE_2, 2},
    {"incw ", REG_X, 0, 1},
    {"tnzw ", REG_X, 0, 1},
    {"swapw", REG_X, 0, 1},
    {"clrw ", REG_X, 0, 1},
    {"neg  ", SHORTOFF_X_2, 0, 2},
    {"exg  ", REG_A, REG_YL, 1},
    {"div  ", REG_X, REG_A, 1},
    {"cpl  ", SHORTOFF_X_2, 0, 2},
    {"sra  ", SHORTOFF_X_2, 0, 2},
    {"divw ", REG_X, REG_Y, 1},
    {"rrc  ", SHORTOFF_X_2, 0, 2},
    {"sra  ", SHORTOFF_X_2, 0, 2},
    {"sll  ", SHORTOFF_X_2, 0, 2},
    {"rlc  ", SHORTOFF_X_2, 0, 2},
    {"dec  ", SHORTOFF_X_2, 0, 2},
    {"ld   ", SHORTOFF_SP_2, REG_A, 2},
    {"inc  ", SHORTOFF_X_2, 0, 2},
    {"tnz  ", SHORTOFF_X_2, 0, 2},
    {"swap ", SHORTOFF_X_2, 0, 2},
    {"clr  ", SHORTOFF_X_2, 0, 2},
    {"neg  ", PTR_X, 0, 1},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", PTR_X, 0, 1},
    {"sra  ", PTR_X, 0, 1},
    {"void ", 0, 0, 0},
    {"rrc  ", PTR_X, 0, 1},
    {"sra  ", PTR_X, 0, 1},
    {"sll  ", PTR_X, 0, 1},
    {"rlc  ", PTR_X, 0, 1},
    {"dec  ", PTR_X, 0, 1},
    {"ld   ", REG_A, SHORTOFF_SP_2, 2},
    {"inc  ", PTR_X, 0, 1},
    {"tnz  ", PTR_X, 0, 1},
    {"swap ", PTR_X, 0, 1},
    {"clr  ", PTR_X, 0, 1},
    {"iret ", 0, 0, 1},
    {"ret  ", 0, 0, 1},
    {"int  ", EXTMEM_234, 0, 4},
    {"trap ", 0, 0, 1},
    {"pop  ", REG_A, 0, 1},
    {"popw ", REG_X, 0, 1},
    {"pop  ", REG_CC, 0, 1},
    {"retf ", 0, 0, 1},
    {"push ", REG_A, 0, 1},
    {"pushw", REG_X, 0, 1},
    {"push ", REG_CC, 0, 1},
    {"break", 0, 0, 1},
    {"ccf  ", 0, 0, 1},
    {"callf", EXTMEM_234, 0, 4},
    {"halt ", 0, 0, 1},
    {"wfi  ", 0, 0, 1},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_X, REG_Y, 1},
    {"ldw  ", REG_SP, REG_X, 1},
    {"ld   ", REG_XH, REG_A, 1},
    {"ldw  ", REG_X, REG_SP, 1},
    {"ld   ", REG_XL, REG_A, 1},
    {"rcf  ", 0, 0, 1},
    {"scf  ", 0, 0, 1},
    {"rim  ", 0, 0, 1},
    {"sim  ", 0, 0, 1},
    {"rvf  ", 0, 0, 1},
    {"nop  ", 0, 0, 1},
    {"ld   ", REG_A, REG_XH, 1},
    {"ld   ", REG_A, REG_XL, 1},
    {"sub  ", REG_A, IMM_BYTE_2, 2},
    {"cp   ", REG_A, IMM_BYTE_2, 2},
    {"sbc  ", REG_A, IMM_BYTE_2, 2},
    {"cpw  ", REG_X, IMM_WORD_23, 3},
    {"and  ", REG_A, IMM_BYTE_2, 2},
    {"bcp  ", REG_A, IMM_BYTE_2, 2},
    {"ld   ", REG_A, IMM_BYTE_2, 2},
    {"ldf  ", EXTOFF_X_234, REG_A, 4},
    {"xor  ", REG_A, IMM_BYTE_2, 2},
    {"adc  ", REG_A, IMM_BYTE_2, 2},
    {"or   ", REG_A, IMM_BYTE_2, 2},
    {"add  ", REG_A, IMM_BYTE_2, 2},
    {"jpf  ", EXTMEM_234, 0, 4},
    {"callr", SHORTOFF_2, 0, 2},
    {"ldw  ", REG_X, IMM_WORD_23, 3},
    {"ldf  ", REG_A, EXTOFF_X_234, 4},
    {"sub  ", REG_A, SHORTMEM_2, 2},
    {"cp   ", REG_A, SHORTMEM_2, 2},
    {"sbc  ", REG_A, SHORTMEM_2, 2},
    {"cpw  ", REG_X, SHORTMEM_2, 2},
    {"and  ", REG_A, SHORTMEM_2, 2},
    {"bcp  ", REG_A, SHORTMEM_2, 2},
    {"ld   ", REG_A, SHORTMEM_2, 2},
    {"ld   ", SHORTMEM_2, REG_A, 2},
    {"xor  ", REG_A, SHORTMEM_2, 2},
    {"adc  ", REG_A, SHORTMEM_2, 2},
    {"or   ", REG_A, SHORTMEM_2, 2},
    {"add  ", REG_A, SHORTMEM_2, 2},
    {"ldf  ", REG_A, EXTMEM_234, 4},
    {"ldf  ", EXTMEM_234, REG_A, 4},
    {"ldw  ", REG_X, SHORTMEM_2, 2},
    {"ldw  ", SHORTMEM_2, REG_X, 2},
    {"sub  ", REG_A, LONGMEM_23, 3},
    {"cp   ", REG_A, LONGMEM_23, 3},
    {"sbc  ", REG_A, LONGMEM_23, 3},
    {"cpw  ", REG_X, LONGMEM_23, 3},
    {"and  ", REG_A, LONGMEM_23, 3},
    {"bcp  ", REG_A, LONGMEM_23, 3},
    {"ld   ", REG_A, LONGMEM_23, 3},
    {"ld   ", LONGMEM_23, REG_A, 3},
    {"xor  ", REG_A, LONGMEM_23, 3},
    {"adc  ", REG_A, LONGMEM_23, 3},
    {"or   ", REG_A, LONGMEM_23, 3},
    {"add  ", REG_A, LONGMEM_23, 3},
    {"jp   ", LONGMEM_23, 0, 3},
    {"call ", LONGMEM_23, 0, 3},
    {"ldw  ", REG_X, LONGMEM_23, 3},
    {"ldw  ", LONGMEM_23, REG_X, 3},
    {"sub  ", REG_A, LONGOFF_X_23, 3},
    {"cp   ", REG_A, LONGOFF_X_23, 3},
    {"sbc  ", REG_A, LONGOFF_X_23, 3},
    {"cpw  ", REG_Y, LONGOFF_X_23, 3},
    {"and  ", REG_A, LONGOFF_X_23, 3},
    {"bcp  ", REG_A, LONGOFF_X_23, 3},
    {"ld   ", REG_A, LONGOFF_X_23, 3},
    {"ld   ", LONGOFF_X_23, REG_A, 3},
    {"xor  ", REG_A, LONGOFF_X_23, 3},
    {"adc  ", REG_A, LONGOFF_X_23, 3},
    {"or   ", REG_A, LONGOFF_X_23, 3},
    {"add  ", REG_A, LONGOFF_X_23, 3},
    {"jp   ", LONGOFF_X_23, 0, 3},
    {"call ", LONGOFF_X_23, 0, 3},
    {"ldw  ", REG_X, LONGOFF_X_23, 3},
    {"ldw  ", LONGOFF_X_23, REG_Y, 3},
    {"sub  ", REG_A, SHORTOFF_X_2, 2},
    {"cp   ", REG_A, SHORTOFF_X_2, 2},
    {"sbc  ", REG_A, SHORTOFF_X_2, 2},
    {"cpw  ", REG_Y, SHORTOFF_X_2, 2},
    {"and  ", REG_A, SHORTOFF_X_2, 2},
    {"bcp  ", REG_A, SHORTOFF_X_2, 2},
    {"ld   ", REG_A, SHORTOFF_X_2, 2},
    {"ld   ", SHORTOFF_X_2, REG_A, 2},
    {"xor  ", REG_A, SHORTOFF_X_2, 2},
    {"adc  ", REG_A, SHORTOFF_X_2, 2},
    {"or   ", REG_A, SHORTOFF_X_2, 2},
    {"add  ", REG_A, SHORTOFF_X_2, 2},
    {"jp   ", SHORTOFF_X_2, 0, 2},
    {"call ", SHORTOFF_X_2, 0, 2},
    {"ldw  ", REG_X, SHORTOFF_X_2, 2},
    {"ldw  ", SHORTOFF_X_2, REG_Y, 2},
    {"sub  ", REG_A, PTR_X, 1},
    {"cp   ", REG_A, PTR_X, 1},
    {"sbc  ", REG_A, PTR_X, 1},
    {"cpw  ", REG_Y, PTR_X, 1},
    {"and  ", REG_A, PTR_X, 1},
    {"bcp  ", REG_A, PTR_X, 1},
    {"ld   ", REG_A, PTR_X, 1},
    {"ld   ", PTR_X, REG_A, 1},
    {"xor  ", REG_A, PTR_X, 1},
    {"adc  ", REG_A, PTR_X, 1},
    {"or   ", REG_A, PTR_X, 1},
    {"add  ", REG_A, PTR_X, 1},
    {"jp   ", PTR_X, 0, 1},
    {"call ", PTR_X, 0, 1},
    {"ldw  ", REG_X, PTR_X, 1},
    {"ldw  ", PTR_X, REG_Y, 1}
};

static const instruction ins_table_72[]={
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjt ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"btjf ", LONGMEM_BIT_123, SHORTOFF_4, 5},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"bset ", LONGMEM_BIT_123, 0, 4},
    {"bres ", LONGMEM_BIT_123, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"neg  ", LONGPTR_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", LONGPTR_23, 0, 4},
    {"sra  ", LONGPTR_23, 0, 4},
    {"void ", 0, 0, 0},
    {"rrc  ", LONGPTR_23, 0, 4},
    {"sra  ", LONGPTR_23, 0, 4},
    {"sll  ", LONGPTR_23, 0, 4},
    {"rlc  ", LONGPTR_23, 0, 4},
    {"dec  ", LONGPTR_23, 0, 4},
    {"void ", 0, 0, 0},
    {"inc  ", LONGPTR_23, 0, 4},
    {"tnz  ", LONGPTR_23, 0, 4},
    {"swap ", LONGPTR_23, 0, 4},
    {"clr  ", LONGPTR_23, 0, 4},
    {"neg  ", LONGOFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", LONGOFF_X_23, 0, 4},
    {"sra  ", LONGOFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"rrc  ", LONGOFF_X_23, 0, 4},
    {"sra  ", LONGOFF_X_23, 0, 4},
    {"sll  ", LONGOFF_X_23, 0, 4},
    {"rlc  ", LONGOFF_X_23, 0, 4},
    {"dec  ", LONGOFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"inc  ", LONGOFF_X_23, 0, 4},
    {"tnz  ", LONGOFF_X_23, 0, 4},
    {"swap ", LONGOFF_X_23, 0, 4},
    {"clr  ", LONGOFF_X_23, 0, 4},
    {"neg  ", LONGMEM_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", LONGMEM_23, 0, 4},
    {"sra  ", LONGMEM_23, 0, 4},
    {"void ", 0, 0, 0},
    {"rrc  ", LONGMEM_23, 0, 4},
    {"sra  ", LONGMEM_23, 0, 4},
    {"sll  ", LONGMEM_23, 0, 4},
    {"rlc  ", LONGMEM_23, 0, 4},
    {"dec  ", LONGMEM_23, 0, 4},
    {"void ", 0, 0, 0},
    {"inc  ", LONGMEM_23, 0, 4},
    {"tnz  ", LONGMEM_23, 0, 4},
    {"swap ", LONGMEM_23, 0, 4},
    {"clr  ", LONGMEM_23, 0, 4},
    {"neg  ", LONGPTR_OFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", LONGPTR_OFF_X_23, 0, 4},
    {"sra  ", LONGPTR_OFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"rrc  ", LONGPTR_OFF_X_23, 0, 4},
    {"sra  ", LONGPTR_OFF_X_23, 0, 4},
    {"sll  ", LONGPTR_OFF_X_23, 0, 4},
    {"rlc  ", LONGPTR_OFF_X_23, 0, 4},
    {"dec  ", LONGPTR_OFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"inc  ", LONGPTR_OFF_X_23, 0, 4},
    {"tnz  ", LONGPTR_OFF_X_23, 0, 4},
    {"swap ", LONGPTR_OFF_X_23, 0, 4},
    {"clr  ", LONGPTR_OFF_X_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"wfe  ", 0, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"subw ", REG_Y, IMM_WORD_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"addw ", REG_Y, IMM_WORD_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"subw ", REG_X, LONGMEM_23, 4},
    {"void ", 0, 0, 0},
    {"subw ", REG_Y, LONGMEM_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"addw ", REG_Y, LONGMEM_23, 4},
    {"void ", 0, 0, 0},
    {"addw ", REG_X, LONGMEM_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"sub  ", REG_A, LONGPTR_23, 4},
    {"cp   ", REG_A, LONGPTR_23, 4},
    {"sbc  ", REG_A, LONGPTR_23, 4},
    {"cpw  ", REG_X, LONGPTR_23, 4},
    {"and  ", REG_A, LONGPTR_23, 4},
    {"bcp  ", REG_A, LONGPTR_23, 4},
    {"ld   ", REG_A, LONGPTR_23, 4},
    {"ld   ", LONGPTR_23, REG_A, 4},
    {"xor  ", REG_A, LONGPTR_23, 4},
    {"adc  ", REG_A, LONGPTR_23, 4},
    {"or   ", REG_A, LONGPTR_23, 4},
    {"add  ", REG_A, LONGPTR_23, 4},
    {"jp   ", LONGPTR_23, 0, 4},
    {"call ", LONGPTR_23, 0, 4},
    {"ldw  ", REG_X, LONGPTR_23, 4},
    {"ldw  ", LONGPTR_23, REG_X, 4},
    {"sub  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"cp   ", REG_A, LONGPTR_OFF_X_23, 4},
    {"sbc  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"cpw  ", REG_Y, LONGPTR_OFF_X_23, 4},
    {"and  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"bcp  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"ld   ", REG_A, LONGPTR_OFF_X_23, 4},
    {"ld   ", LONGPTR_OFF_X_23, REG_A, 4},
    {"xor  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"adc  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"or   ", REG_A, LONGPTR_OFF_X_23, 4},
    {"add  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"jp   ", LONGPTR_OFF_X_23, 0, 4},
    {"call ", LONGPTR_OFF_X_23, 0, 4},
    {"ldw  ", REG_X, LONGPTR_OFF_X_23, 4},
    {"ldw  ", LONGPTR_OFF_X_23, REG_Y, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"subw ", REG_X, SHORTOFF_SP_2, 3},
    {"subw ", REG_Y, SHORTOFF_SP_2, 3},
    {"addw ", REG_Y, SHORTOFF_SP_2, 3},
    {"addw ", REG_X, SHORTOFF_SP_2, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"subw ", REG_X, SHORTOFF_SP_2, 3},
    {"void ", 0, 0, 0},
    {"subw ", REG_Y, SHORTOFF_SP_2, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"addw ", REG_Y, SHORTOFF_SP_2, 3},
    {"void ", 0, 0, 0},
    {"addw ", REG_X, SHORTOFF_SP_2, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0}
};

static const instruction ins_table_90[]={
    {"void ", 0, 0, 0},
    {"rrwa ", REG_Y, 0, 2},
    {"rlwa ", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"bcpl ", LONGMEM_BIT_123, 0, 4},
    {"bccm ", LONGMEM_BIT_123, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"jrnh ", SHORTOFF_2, 0, 3},
    {"jrh  ", SHORTOFF_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"jrnm ", SHORTOFF_2, 0, 3},
    {"jrm  ", SHORTOFF_2, 0, 3},
    {"jril ", SHORTOFF_2, 0, 3},
    {"jrih ", SHORTOFF_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"neg  ", LONGOFF_Y_23, 0, 4},
    {"void ", 0, 0, 0},
    {"mul  ", REG_Y, REG_A, 2},
    {"cpl  ", LONGOFF_Y_23, 0, 4},
    {"sra  ", LONGOFF_Y_23, 0, 4},
    {"void ", 0, 0, 0},
    {"rrc  ", LONGOFF_Y_23, 0, 4},
    {"sra  ", LONGOFF_Y_23, 0, 4},
    {"sll  ", LONGOFF_Y_23, 0, 4},
    {"rlc  ", LONGOFF_Y_23, 0, 4},
    {"dec  ", LONGOFF_Y_23, 0, 4},
    {"void ", 0, 0, 0},
    {"inc  ", LONGOFF_Y_23, 0, 4},
    {"tnz  ", LONGOFF_Y_23, 0, 4},
    {"swap ", LONGOFF_Y_23, 0, 4},
    {"clr  ", LONGOFF_Y_23, 0, 4},
    {"negw ", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cplw ", REG_Y, 0, 2},
    {"srlw ", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"rrcw ", REG_Y, 0, 2},
    {"sraw ", REG_Y, 0, 2},
    {"sllw ", REG_Y, 0, 2},
    {"rlcw ", REG_Y, 0, 2},
    {"decw ", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"incw ", REG_Y, 0, 2},
    {"tnzw ", REG_Y, 0, 2},
    {"swapw", REG_Y, 0, 2},
    {"clrw ", REG_Y, 0, 2},
    {"neg  ", SHORTOFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"div  ", REG_Y, REG_A, 2},
    {"cpl  ", SHORTOFF_Y_2, 0, 3},
    {"sra  ", SHORTOFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"rrc  ", SHORTOFF_Y_2, 0, 3},
    {"sra  ", SHORTOFF_Y_2, 0, 3},
    {"sll  ", SHORTOFF_Y_2, 0, 3},
    {"rlc  ", SHORTOFF_Y_2, 0, 3},
    {"dec  ", SHORTOFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"inc  ", SHORTOFF_Y_2, 0, 3},
    {"tnz  ", SHORTOFF_Y_2, 0, 3},
    {"swap ", SHORTOFF_Y_2, 0, 3},
    {"clr  ", SHORTOFF_Y_2, 0, 3},
    {"neg  ", PTR_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", PTR_Y, 0, 2},
    {"sra  ", PTR_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"rrc  ", PTR_Y, 0, 2},
    {"sra  ", PTR_Y, 0, 2},
    {"sll  ", PTR_Y, 0, 2},
    {"rlc  ", PTR_Y, 0, 2},
    {"dec  ", PTR_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"inc  ", PTR_Y, 0, 2},
    {"tnz  ", PTR_Y, 0, 2},
    {"swap ", PTR_Y, 0, 2},
    {"clr  ", PTR_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"popw ", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"pushw", REG_Y, 0, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_Y, REG_X, 2},
    {"ldw  ", REG_SP, REG_Y, 2},
    {"ld   ", REG_YH, REG_A, 2},
    {"ldw  ", REG_Y, REG_SP, 2},
    {"ld   ", REG_YL, REG_A, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ld   ", REG_A, REG_YH, 2},
    {"ld   ", REG_A, REG_YL, 2},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpw  ", REG_Y, IMM_WORD_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", EXTOFF_Y_234, REG_A, 5},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_Y, IMM_WORD_23, 4},
    {"ldf  ", REG_A, EXTOFF_Y_234, 5},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpw  ", REG_Y, SHORTMEM_2, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_Y, SHORTMEM_2, 3},
    {"ldw  ", SHORTMEM_2, REG_Y, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpw  ", REG_Y, LONGMEM_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_Y, LONGMEM_23, 4},
    {"ldw  ", LONGMEM_23, REG_Y, 4},
    {"sub  ", REG_A, LONGOFF_Y_23, 4},
    {"cp   ", REG_A, LONGOFF_Y_23, 4},
    {"sbc  ", REG_A, LONGOFF_Y_23, 4},
    {"cpw  ", REG_X, LONGOFF_Y_23, 4},
    {"and  ", REG_A, LONGOFF_Y_23, 4},
    {"bcp  ", REG_A, LONGOFF_Y_23, 4},
    {"ld   ", REG_A, LONGOFF_Y_23, 4},
    {"ld   ", LONGOFF_Y_23, REG_A, 4},
    {"xor  ", REG_A, LONGOFF_Y_23, 4},
    {"adc  ", REG_A, LONGOFF_Y_23, 4},
    {"or   ", REG_A, LONGOFF_Y_23, 4},
    {"add  ", REG_A, LONGOFF_Y_23, 4},
    {"jp   ", LONGOFF_Y_23, 0, 4},
    {"call ", LONGOFF_Y_23, 0, 4},
    {"ldw  ", REG_Y, LONGOFF_Y_23, 4},
    {"ldw  ", LONGOFF_Y_23, REG_X, 4},
    {"sub  ", REG_A, SHORTOFF_Y_2, 3},
    {"cp   ", REG_A, SHORTOFF_Y_2, 3},
    {"sbc  ", REG_A, SHORTOFF_Y_2, 3},
    {"cpw  ", REG_X, SHORTOFF_Y_2, 3},
    {"and  ", REG_A, SHORTOFF_Y_2, 3},
    {"bcp  ", REG_A, SHORTOFF_Y_2, 3},
    {"ld   ", REG_A, SHORTOFF_Y_2, 3},
    {"ld   ", SHORTOFF_Y_2, REG_A, 3},
    {"xor  ", REG_A, SHORTOFF_Y_2, 3},
    {"adc  ", REG_A, SHORTOFF_Y_2, 3},
    {"or   ", REG_A, SHORTOFF_Y_2, 3},
    {"add  ", REG_A, SHORTOFF_Y_2, 3},
    {"jp   ", SHORTOFF_Y_2, 0, 3},
    {"call ", SHORTOFF_Y_2, 0, 3},
    {"ldw  ", REG_Y, SHORTOFF_Y_2, 3},
    {"ldw  ", SHORTOFF_Y_2, REG_X, 3},
    {"sub  ", REG_A, PTR_Y, 2},
    {"cp   ", REG_A, PTR_Y, 2},
    {"sbc  ", REG_A, PTR_Y, 2},
    {"cpw  ", REG_X, PTR_Y, 2},
    {"and  ", REG_A, PTR_Y, 2},
    {"bcp  ", REG_A, PTR_Y, 2},
    {"ld   ", REG_A, PTR_Y, 2},
    {"ld   ", PTR_Y, REG_A, 2},
    {"xor  ", REG_A, PTR_Y, 2},
    {"adc  ", REG_A, PTR_Y, 2},
    {"or   ", REG_A, PTR_Y, 2},
    {"add  ", REG_A, PTR_Y, 2},
    {"jp   ", PTR_Y, 0, 2},
    {"call ", PTR_Y, 0, 2},
    {"ldw  ", REG_Y, PTR_Y, 2},
    {"ldw  ", PTR_Y, REG_X, 2}
};

/*
 * Instructions 0x91 modifier, OC1=0x60:0xDF
 */
static const instruction ins_table_91_0x60[]={
    {"neg  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"sra  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"rrc  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"sra  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"sll  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"rlc  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"dec  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"inc  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"tnz  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"swap ", SHORTPTR_OFF_Y_2, 0, 3},
    {"clr  ", SHORTPTR_OFF_Y_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", LONGPTR_OFF_Y_23, REG_A, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", REG_A, LONGPTR_OFF_Y_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpw  ", REG_Y, SHORTPTR_2, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldw  ", REG_Y, SHORTPTR_2, 3},
    {"ldw  ", SHORTPTR_2, REG_Y, 3},
    {"sub  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"cp   ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"sbc  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"cpw  ", REG_X, SHORTPTR_OFF_Y_2, 3},
    {"and  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"bcp  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"ld   ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"ld   ", SHORTPTR_OFF_Y_2, REG_A, 3},
    {"xor  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"adc  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"or   ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"add  ", REG_A, SHORTPTR_OFF_Y_2, 3},
    {"jp   ", SHORTPTR_OFF_Y_2, 0, 3},
    {"call ", SHORTPTR_OFF_Y_2, 0, 3},
    {"ldw  ", REG_Y, SHORTPTR_OFF_Y_2, 3},
    {"ldw  ", SHORTPTR_OFF_Y_2, REG_X, 3}
};

/*
 * Instructions 0x92 modifier, OC1=0x30:0xDF
 */
static const instruction ins_table_92_0x30[]={
    {"neg  ", SHORTPTR_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", SHORTPTR_2, 0, 3},
    {"sra  ", SHORTPTR_2, 0, 3},
    {"void ", 0, 0, 0},
    {"rrc  ", SHORTPTR_2, 0, 3},
    {"sra  ", SHORTPTR_2, 0, 3},
    {"sll  ", SHORTPTR_2, 0, 3},
    {"rlc  ", SHORTPTR_2, 0, 3},
    {"dec  ", SHORTPTR_2, 0, 3},
    {"void ", 0, 0, 0},
    {"inc  ", SHORTPTR_2, 0, 3},
    {"tnz  ", SHORTPTR_2, 0, 3},
    {"swap ", SHORTPTR_2, 0, 3},
    {"clr  ", SHORTPTR_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"neg  ", SHORTPTR_OFF_X_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"cpl  ", SHORTPTR_OFF_X_2, 0, 3},
    {"sra  ", SHORTPTR_OFF_X_2, 0, 3},
    {"void ", 0, 0, 0},
    {"rrc  ", SHORTPTR_OFF_X_2, 0, 3},
    {"sra  ", SHORTPTR_OFF_X_2, 0, 3},
    {"sll  ", SHORTPTR_OFF_X_2, 0, 3},
    {"rlc  ", SHORTPTR_OFF_X_2, 0, 3},
    {"dec  ", SHORTPTR_OFF_X_2, 0, 3},
    {"void ", 0, 0, 0},
    {"inc  ", SHORTPTR_OFF_X_2, 0, 3},
    {"tnz  ", SHORTPTR_OFF_X_2, 0, 3},
    {"swap ", SHORTPTR_OFF_X_2, 0, 3},
    {"clr  ", SHORTPTR_OFF_X_2, 0, 3},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"callf", LONGPTR_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", LONGPTR_OFF_X_23, REG_A, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"jpf  ", LONGPTR_23, 0, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", REG_A, LONGPTR_OFF_X_23, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"ldf  ", REG_A, LONGPTR_23, 4},
    {"ldf  ", LONGPTR_23, REG_A, 4},
    {"void ", 0, 0, 0},
    {"void ", 0, 0, 0},
    {"sub  ", REG_A, SHORTPTR_2, 3},
    {"cp   ", REG_A, SHORTPTR_2, 3},
    {"sbc  ", REG_A, SHORTPTR_2, 3},
    {"cpw  ", REG_X, SHORTPTR_2, 3},
    {"and  ", REG_A, SHORTPTR_2, 3},
    {"bcp  ", REG_A, SHORTPTR_2, 3},
    {"ld   ", REG_A, SHORTPTR_2, 3},
    {"ld   ", SHORTPTR_2, REG_A, 3},
    {"xor  ", REG_A, SHORTPTR_2, 3},
    {"adc  ", REG_A, SHORTPTR_2, 3},
    {"or   ", REG_A, SHORTPTR_2, 3},
    {"add  ", REG_A, SHORTPTR_2, 3},
    {"jp   ", SHORTPTR_2, 0, 3},
    {"call ", SHORTPTR_2, 0, 3},
    {"ldw  ", REG_X, SHORTPTR_2, 3},
    {"ldw  ", SHORTPTR_2, REG_X, 3},
    {"sub  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"cp   ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"sbc  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"cpw  ", REG_Y, SHORTPTR_OFF_X_2, 3},
    {"and  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"bcp  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"ld   ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"ld   ", SHORTPTR_OFF_X_2, REG_A, 3},
    {"xor  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"adc  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"or   ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"add  ", REG_A, SHORTPTR_OFF_X_2, 3},
    {"jp   ", SHORTPTR_OFF_X_2, 0, 3},
    {"call ", SHORTPTR_OFF_X_2, 0, 3},
    {"ldw  ", REG_X, SHORTPTR_OFF_X_2, 3},
    {"ldw  ", SHORTPTR_OFF_X_2, REG_Y, 3}
};

