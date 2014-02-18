// auto-generatad C++ file for `supplier`

#ifndef BASESUPPLIER_H_
#define BASESUPPLIER_H_

#include "record/AbstractRecord.h"
#include "record/SupplierMeta.h"

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

class BaseSupplier: public Myriad::AbstractRecord
{
public:

    BaseSupplier(const SupplierMeta& meta) : 
        _address(40),
        _phone_components(3),
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

    void phoneComponents(const vector<I16u>& v);
    const vector<I16u>& phoneComponents() const;

    virtual const String phone() const = 0;

    void acctBal(const Decimal& v);
    const Decimal& acctBal() const;

protected:

    // fields
    I64u _supp_key;
    vector<Char> _address;
    I16u _nation_key;
    vector<I16u> _phone_components;
    Decimal _acct_bal;

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

inline void BaseSupplier::phoneComponents(const vector<I16u>& v)
{
    _phone_components = v;
    _phone_components.resize(v.size());
}

inline const vector<I16u>& BaseSupplier::phoneComponents() const
{
    return _phone_components;
}

inline void BaseSupplier::acctBal(const Decimal& v)
{
    _acct_bal = v;
}

inline const Decimal& BaseSupplier::acctBal() const
{
    return _acct_bal;
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

    enum Field { UNKNOWN, GEN_ID, SUPP_KEY, NAME, ADDRESS, NATION_KEY, PHONE_COMPONENTS, PHONE, ACCT_BAL };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseSupplier>::serialize(std::ostream& out, const TPCHGen::BaseSupplier& record)
{
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.name(), false);
    out << '|';
    write(out, record.address(), false);
    out << '|';
    write(out, record.nationKey(), false);
    out << '|';
    write(out, record.phone(), false);
    out << '|';
    write(out, record.acctBal(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASESUPPLIER_H_ */
