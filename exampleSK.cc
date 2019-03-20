// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "example.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



ExampleInterface_ptr ExampleInterface_Helper::_nil() {
  return ::ExampleInterface::_nil();
}

::CORBA::Boolean ExampleInterface_Helper::is_nil(::ExampleInterface_ptr p) {
  return ::CORBA::is_nil(p);

}

void ExampleInterface_Helper::release(::ExampleInterface_ptr p) {
  ::CORBA::release(p);
}

void ExampleInterface_Helper::marshalObjRef(::ExampleInterface_ptr obj, cdrStream& s) {
  ::ExampleInterface::_marshalObjRef(obj, s);
}

ExampleInterface_ptr ExampleInterface_Helper::unmarshalObjRef(cdrStream& s) {
  return ::ExampleInterface::_unmarshalObjRef(s);
}

void ExampleInterface_Helper::duplicate(::ExampleInterface_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

ExampleInterface_ptr
ExampleInterface::_duplicate(::ExampleInterface_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

ExampleInterface_ptr
ExampleInterface::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


ExampleInterface_ptr
ExampleInterface::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

ExampleInterface_ptr
ExampleInterface::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_ExampleInterface _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_ExampleInterface* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_ExampleInterface;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* ExampleInterface::_PD_repoId = "IDL:ExampleInterface:1.0";


_objref_ExampleInterface::~_objref_ExampleInterface() {
  
}


_objref_ExampleInterface::_objref_ExampleInterface(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::ExampleInterface::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
_objref_ExampleInterface::_ptrToObjRef(const char* id)
{
  if (id == ::ExampleInterface::_PD_repoId)
    return (::ExampleInterface_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::ExampleInterface::_PD_repoId))
    return (::ExampleInterface_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for ExampleInterface::newQuestion

// Proxy call descriptor class. Mangled signature:
//  void_i_cstring_i_cstring
class _0RL_cd_974e3b69a9629258_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var arg_1_;
  const char* arg_1;
};

void _0RL_cd_974e3b69a9629258_00000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);
  _n.marshalString(arg_1,0);

}

void _0RL_cd_974e3b69a9629258_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();
  arg_1_ = _n.unmarshalString(0);
  arg_1 = arg_1_.in();

}

const char* const _0RL_cd_974e3b69a9629258_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_00000000* tcd = (_0RL_cd_974e3b69a9629258_00000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  impl->newQuestion(tcd->arg_0, tcd->arg_1);


}

void _objref_ExampleInterface::newQuestion(const char* question, const char* answer)
{
  _0RL_cd_974e3b69a9629258_00000000 _call_desc(_0RL_lcfn_974e3b69a9629258_10000000, "newQuestion", 12);
  _call_desc.arg_0 = question;
  _call_desc.arg_1 = answer;

  _invoke(_call_desc);



}


//
// Code for ExampleInterface::getRandomQuestion

// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_974e3b69a9629258_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_20000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var result;
};

void _0RL_cd_974e3b69a9629258_20000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_974e3b69a9629258_20000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_974e3b69a9629258_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_20000000* tcd = (_0RL_cd_974e3b69a9629258_20000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  tcd->result = impl->getRandomQuestion();


}

char* _objref_ExampleInterface::getRandomQuestion()
{
  _0RL_cd_974e3b69a9629258_20000000 _call_desc(_0RL_lcfn_974e3b69a9629258_30000000, "getRandomQuestion", 18);


  _invoke(_call_desc);
  return _call_desc.result._retn();


}


//
// Code for ExampleInterface::answerQuestion

// Proxy call descriptor class. Mangled signature:
//  _cstring_i_cstring
class _0RL_cd_974e3b69a9629258_40000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_40000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::String_var result;
};

void _0RL_cd_974e3b69a9629258_40000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_974e3b69a9629258_40000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_974e3b69a9629258_40000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_974e3b69a9629258_40000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_974e3b69a9629258_40000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_40000000* tcd = (_0RL_cd_974e3b69a9629258_40000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  tcd->result = impl->answerQuestion(tcd->arg_0);


}

char* _objref_ExampleInterface::answerQuestion(const char* userAnswer)
{
  _0RL_cd_974e3b69a9629258_40000000 _call_desc(_0RL_lcfn_974e3b69a9629258_50000000, "answerQuestion", 15);
  _call_desc.arg_0 = userAnswer;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}


//
// Code for ExampleInterface::getQuestion

// Proxy call descriptor class. Mangled signature:
//  _cstring_i_cshort
class _0RL_cd_974e3b69a9629258_60000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_60000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Short arg_0;
  ::CORBA::String_var result;
};

void _0RL_cd_974e3b69a9629258_60000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;

}

void _0RL_cd_974e3b69a9629258_60000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Short&)arg_0 <<= _n;

}

void _0RL_cd_974e3b69a9629258_60000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_974e3b69a9629258_60000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_974e3b69a9629258_60000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_70000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_60000000* tcd = (_0RL_cd_974e3b69a9629258_60000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  tcd->result = impl->getQuestion(tcd->arg_0);


}

char* _objref_ExampleInterface::getQuestion(::CORBA::Short index)
{
  _0RL_cd_974e3b69a9629258_60000000 _call_desc(_0RL_lcfn_974e3b69a9629258_70000000, "getQuestion", 12);
  _call_desc.arg_0 = index;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}


//
// Code for ExampleInterface::setRandomIndex

// Proxy call descriptor class. Mangled signature:
//  void
class _0RL_cd_974e3b69a9629258_80000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_80000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
    
  
  static const char* const _user_exns[];

  
};

const char* const _0RL_cd_974e3b69a9629258_80000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_90000000(omniCallDescriptor*, omniServant* svnt)
{
  
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  impl->setRandomIndex();


}

void _objref_ExampleInterface::setRandomIndex()
{
  _0RL_cd_974e3b69a9629258_80000000 _call_desc(_0RL_lcfn_974e3b69a9629258_90000000, "setRandomIndex", 15);


  _invoke(_call_desc);



}


//
// Code for ExampleInterface::removeQuestion

// Proxy call descriptor class. Mangled signature:
//  void_i_cshort
class _0RL_cd_974e3b69a9629258_a0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_a0000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::Short arg_0;
};

void _0RL_cd_974e3b69a9629258_a0000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;

}

void _0RL_cd_974e3b69a9629258_a0000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Short&)arg_0 <<= _n;

}

const char* const _0RL_cd_974e3b69a9629258_a0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_b0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_a0000000* tcd = (_0RL_cd_974e3b69a9629258_a0000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  impl->removeQuestion(tcd->arg_0);


}

void _objref_ExampleInterface::removeQuestion(::CORBA::Short index)
{
  _0RL_cd_974e3b69a9629258_a0000000 _call_desc(_0RL_lcfn_974e3b69a9629258_b0000000, "removeQuestion", 15);
  _call_desc.arg_0 = index;

  _invoke(_call_desc);



}


//
// Code for ExampleInterface::getSize

// Proxy call descriptor class. Mangled signature:
//  _cshort
class _0RL_cd_974e3b69a9629258_c0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_974e3b69a9629258_c0000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Short result;
};

void _0RL_cd_974e3b69a9629258_c0000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_974e3b69a9629258_c0000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::Short&)result <<= _n;

}

const char* const _0RL_cd_974e3b69a9629258_c0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_974e3b69a9629258_d0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_974e3b69a9629258_c0000000* tcd = (_0RL_cd_974e3b69a9629258_c0000000*)cd;
  _impl_ExampleInterface* impl = (_impl_ExampleInterface*) svnt->_ptrToInterface(ExampleInterface::_PD_repoId);
  tcd->result = impl->getSize();


}

::CORBA::Short _objref_ExampleInterface::getSize()
{
  _0RL_cd_974e3b69a9629258_c0000000 _call_desc(_0RL_lcfn_974e3b69a9629258_d0000000, "getSize", 8);


  _invoke(_call_desc);
  return _call_desc.result;


}

_pof_ExampleInterface::~_pof_ExampleInterface() {}


omniObjRef*
_pof_ExampleInterface::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::_objref_ExampleInterface(ior, id);
}


::CORBA::Boolean
_pof_ExampleInterface::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::ExampleInterface::_PD_repoId))
    return 1;
  
  return 0;
}

const _pof_ExampleInterface _the_pof_ExampleInterface;

_impl_ExampleInterface::~_impl_ExampleInterface() {}


::CORBA::Boolean
_impl_ExampleInterface::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "newQuestion")) {

    _0RL_cd_974e3b69a9629258_00000000 _call_desc(_0RL_lcfn_974e3b69a9629258_10000000, "newQuestion", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "getRandomQuestion")) {

    _0RL_cd_974e3b69a9629258_20000000 _call_desc(_0RL_lcfn_974e3b69a9629258_30000000, "getRandomQuestion", 18, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "answerQuestion")) {

    _0RL_cd_974e3b69a9629258_40000000 _call_desc(_0RL_lcfn_974e3b69a9629258_50000000, "answerQuestion", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "getQuestion")) {

    _0RL_cd_974e3b69a9629258_60000000 _call_desc(_0RL_lcfn_974e3b69a9629258_70000000, "getQuestion", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "setRandomIndex")) {

    _0RL_cd_974e3b69a9629258_80000000 _call_desc(_0RL_lcfn_974e3b69a9629258_90000000, "setRandomIndex", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "removeQuestion")) {

    _0RL_cd_974e3b69a9629258_a0000000 _call_desc(_0RL_lcfn_974e3b69a9629258_b0000000, "removeQuestion", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if (omni::strMatch(op, "getSize")) {

    _0RL_cd_974e3b69a9629258_c0000000 _call_desc(_0RL_lcfn_974e3b69a9629258_d0000000, "getSize", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
_impl_ExampleInterface::_ptrToInterface(const char* id)
{
  if (id == ::ExampleInterface::_PD_repoId)
    return (::_impl_ExampleInterface*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::ExampleInterface::_PD_repoId))
    return (::_impl_ExampleInterface*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
_impl_ExampleInterface::_mostDerivedRepoId()
{
  return ::ExampleInterface::_PD_repoId;
}

POA_ExampleInterface::~POA_ExampleInterface() {}
