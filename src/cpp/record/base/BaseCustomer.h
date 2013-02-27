// auto-generatad C++ file for `customer`

#ifndef BASECUSTOMER_H_
#define BASECUSTOMER_H_

#include "record/AbstractRecord.h"
#include "record/CustomerMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Customer;
class CustomerConfig;
class CustomerGenerator;
class CustomerSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseCustomer: public Myriad::AbstractRecord
{
public:

    BaseCustomer(const CustomerMeta& meta) : 
        _address(40),
        _phone_components(3),
        _meta(meta)
    {
    }

    const CustomerMeta& meta() const
    {
        return _meta;
    }

    void custKey(const I64u& v);
    const I64u& custKey() const;

    virtual const String name() const = 0;

    void address(const vector<Char>& v);
    const vector<Char>& address() const;

    void nationKey(const I64u& v);
    const I64u& nationKey() const;

    void phoneComponents(const vector<I16u>& v);
    const vector<I16u>& phoneComponents() const;

    virtual const String phone() const = 0;

    void acctBal(const Decimal& v);
    const Decimal& acctBal() const;

    void mktSegment(const Enum& v);
    const Enum& mktSegment() const;
    const String& mktSegmentEnumValue() const;

    void comment(const String& v);
    const String& comment() const;

protected:

    // fields
    I64u _cust_key;
    vector<Char> _address;
    I64u _nation_key;
    vector<I16u> _phone_components;
    Decimal _acct_bal;
    Enum _mkt_segment;
    String _comment;

    // meta
    const CustomerMeta& _meta;
};

inline void BaseCustomer::custKey(const I64u& v)
{
    _cust_key = v;
}

inline const I64u& BaseCustomer::custKey() const
{
    return _cust_key;
}

inline void BaseCustomer::address(const vector<Char>& v)
{
    _address = v;
    _address.resize(v.size());
}

inline const vector<Char>& BaseCustomer::address() const
{
    return _address;
}

inline void BaseCustomer::nationKey(const I64u& v)
{
    _nation_key = v;
}

inline const I64u& BaseCustomer::nationKey() const
{
    return _nation_key;
}

inline void BaseCustomer::phoneComponents(const vector<I16u>& v)
{
    _phone_components = v;
    _phone_components.resize(v.size());
}

inline const vector<I16u>& BaseCustomer::phoneComponents() const
{
    return _phone_components;
}

inline void BaseCustomer::acctBal(const Decimal& v)
{
    _acct_bal = v;
}

inline const Decimal& BaseCustomer::acctBal() const
{
    return _acct_bal;
}

inline void BaseCustomer::mktSegment(const Enum& v)
{
    _mkt_segment = v;
}

inline const Enum& BaseCustomer::mktSegment() const
{
    return _mkt_segment;
}

inline const String& BaseCustomer::mktSegmentEnumValue() const
{
    return _meta.mkt_segment[_mkt_segment];
}

inline void BaseCustomer::comment(const String& v)
{
    _comment = v;
}

inline const String& BaseCustomer::comment() const
{
    return _comment;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Customer>
{
    typedef TPCHGen::CustomerMeta MetaType;
    typedef TPCHGen::CustomerGenerator GeneratorType;
    typedef TPCHGen::CustomerSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Customer> FactoryType;

    enum Field { UNKNOWN, GEN_ID, CUST_KEY, NAME, ADDRESS, NATION_KEY, PHONE_COMPONENTS, PHONE, ACCT_BAL, MKT_SEGMENT, COMMENT };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseCustomer>::serialize(std::ostream& out, const TPCHGen::BaseCustomer& record)
{
    write(out, record.custKey(), false);
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
    write(out, record.mktSegmentEnumValue(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASECUSTOMER_H_ */
