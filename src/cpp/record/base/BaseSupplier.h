// auto-generatad C++ file for `supplier`

#ifndef BASESUPPLIER_H_
#define BASESUPPLIER_H_

#include "record/Record.h"
#include "record/SupplierMeta.h"

using namespace Myriad;

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Supplier;
class SupplierConfig;
class SupplierGenerator;
class SupplierSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseSupplier: public Record
{
public:

    BaseSupplier(const SupplierMeta& meta) : 
        _address(40),
        _meta(meta)
    {
    }

    const SupplierMeta& meta() const
    {
        return _meta;
    }

    void suppKey(const I64u& v);
    const I64u& suppKey() const;

    virtual const String name() const = 0;
    void address(const vector<Char>& v);
    const vector<Char>& address() const;

    void nationKey(const I16u& v);
    const I16u& nationKey() const;

    void phoneLocalNumber1(const I16u& v);
    const I16u& phoneLocalNumber1() const;

    void phoneLocalNumber2(const I16u& v);
    const I16u& phoneLocalNumber2() const;

    void phoneLocalNumber3(const I16u& v);
    const I16u& phoneLocalNumber3() const;

    virtual const String phone() const = 0;
    void acctBal(const Decimal& v);
    const Decimal& acctBal() const;

    void comment(const String& v);
    const String& comment() const;

protected:

    // fields
    I64u _supp_key;
    vector<Char> _address;
    I16u _nation_key;
    I16u _phone_local_number1;
    I16u _phone_local_number2;
    I16u _phone_local_number3;
    Decimal _acct_bal;
    String _comment;

    // meta
    const SupplierMeta& _meta;
};

inline void BaseSupplier::suppKey(const I64u& v)
{
    _supp_key = v;
}

inline const I64u& BaseSupplier::suppKey() const
{
    return _supp_key;
}

inline void BaseSupplier::address(const vector<Char>& v)
{
    _address = v;
    _address.resize(v.size());
}

inline const vector<Char>& BaseSupplier::address() const
{
    return _address;
}

inline void BaseSupplier::nationKey(const I16u& v)
{
    _nation_key = v;
}

inline const I16u& BaseSupplier::nationKey() const
{
    return _nation_key;
}

inline void BaseSupplier::phoneLocalNumber1(const I16u& v)
{
    _phone_local_number1 = v;
}

inline const I16u& BaseSupplier::phoneLocalNumber1() const
{
    return _phone_local_number1;
}

inline void BaseSupplier::phoneLocalNumber2(const I16u& v)
{
    _phone_local_number2 = v;
}

inline const I16u& BaseSupplier::phoneLocalNumber2() const
{
    return _phone_local_number2;
}

inline void BaseSupplier::phoneLocalNumber3(const I16u& v)
{
    _phone_local_number3 = v;
}

inline const I16u& BaseSupplier::phoneLocalNumber3() const
{
    return _phone_local_number3;
}

inline void BaseSupplier::acctBal(const Decimal& v)
{
    _acct_bal = v;
}

inline const Decimal& BaseSupplier::acctBal() const
{
    return _acct_bal;
}

inline void BaseSupplier::comment(const String& v)
{
    _comment = v;
}

inline const String& BaseSupplier::comment() const
{
    return _comment;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Supplier>
{
    typedef TPCHGen::SupplierMeta MetaType;
    typedef TPCHGen::SupplierGenerator GeneratorType;
    typedef TPCHGen::SupplierSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Supplier> FactoryType;

    enum Field { UNKNOWN, GEN_ID, SUPP_KEY, NAME, ADDRESS, NATION_KEY, PHONE_LOCAL_NUMBER1, PHONE_LOCAL_NUMBER2, PHONE_LOCAL_NUMBER3, PHONE, ACCT_BAL, COMMENT };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseSupplier>::serialize(std::ostream& out, const TPCHGen::BaseSupplier& record)
{
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.name(), true);
    out << '|';
    write(out, record.address(), true);
    out << '|';
    write(out, record.nationKey(), false);
    out << '|';
    write(out, record.phone(), true);
    out << '|';
    write(out, record.acctBal(), false);
    out << '|';
    write(out, record.comment(), true);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASESUPPLIER_H_ */
