/* Simulator instruction decoder for mepcop2_32.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2005 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#if HAVE_CONFIG_H
#include "config.h"
#endif
#include "mep_ext2.h"

using namespace mep_ext2; // FIXME: namespace organization still wip


// The instruction descriptor array. 

mepcop2_32_idesc mepcop2_32_idesc::idesc_table[MEPCOP2_32_INSN_X_INVALID + 1] =
{
  { mepcop2_32_sem_x_invalid, "X_INVALID", MEPCOP2_32_INSN_X_INVALID, { 0|(1<<CGEN_INSN_VIRTUAL), (1<<MACH_BASE), { 1, "\x8" }, 0, CONFIG_NONE } },

};

// Given a canonical virtual insn id, return the target specific one.

mepcop2_32_insn_type
mepcop2_32_idesc::lookup_virtual (virtual_insn_type vit)
{
  switch (vit)
    {
      case VIRTUAL_INSN_INVALID: return MEPCOP2_32_INSN_X_INVALID;
      case VIRTUAL_INSN_COND: return MEPCOP2_32_INSN_X_INVALID;
    }
  abort ();
}


// Declare extractor functions

static void
mepcop2_32_extract_sfmt_empty (mepcop2_32_scache* abuf, mep_ext2_cpu* current_cpu, PCADDR pc, mepcop2_32_insn_word base_insn, mepcop2_32_insn_word entire_insn);

// Fetch & decode instruction
void
mepcop2_32_scache::decode (mep_ext2_cpu* current_cpu, PCADDR pc, mepcop2_32_insn_word base_insn, mepcop2_32_insn_word entire_insn)
{
  /* Result of decoder.  */
  MEPCOP2_32_INSN_TYPE itype;

  {
    mepcop2_32_insn_word insn = base_insn;

    {
      unsigned int val = (((insn >> 31) & (1 << 0)));
      switch (val)
      {
      default : itype = MEPCOP2_32_INSN_X_INVALID; mepcop2_32_extract_sfmt_empty (this, current_cpu, pc, base_insn, entire_insn); goto done;
      }
    }

  }

  /* The instruction has been decoded and fields extracted.  */
  done:

  this->addr = pc;
  // FIXME: To be redone (to handle ISA variants).
  this->idesc = & mepcop2_32_idesc::idesc_table[itype];
  // ??? record semantic handler?
  assert(this->idesc->sem_index == itype);
}

void
mepcop2_32_extract_sfmt_empty (mepcop2_32_scache* abuf, mep_ext2_cpu* current_cpu, PCADDR pc, mepcop2_32_insn_word base_insn, mepcop2_32_insn_word entire_insn){
    mepcop2_32_insn_word insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  if (UNLIKELY(current_cpu->trace_extract_p))
    {
      current_cpu->trace_stream 
        << "0x" << hex << pc << dec << " (sfmt_empty)\t"
        << endl;
    }

#undef FLD
}

