// auto-generatad C++ file for `lineitem`

#ifndef BASELINEITEM_H_
#define BASELINEITEM_H_

#include "record/AbstractRecord.h"
#include "record/LineitemMeta.h"
#include "record/Order.h"
#include "record/Part.h"
#include "record/PartSupp.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Lineitem;
class LineitemConfig;
class LineitemGenerator;
class LineitemSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseLineitem: public Myriad::AbstractRecord
{
public:

    BaseLineitem(const LineitemMeta& meta) : 
        _meta(meta)
    {
    }

    const LineitemMeta& meta() const
    {
        return _meta;
    }

    void orderKey(const I64u& v);
    const I64u& orderKey() const;

    void partKey(const I64u& v);
    const I64u& partKey() const;

    void suppKey(const I64u& v);
    const I64u& suppKey() const;

    void lineNumber(const I16u& v);
    const I16u& lineNumber() const;

    void quantity(const I16u& v);
    const I16u& quantity() const;

    virtual const Decimal extendedPrice() const = 0;

    void discount(const Decimal& v);
    const Decimal& discount() const;

    void tax(const Decimal& v);
    const Decimal& tax() const;

    void shipDateOffset(const I16u& v);
    const I16u& shipDateOffset() const;

    virtual const Date shipDate() const = 0;

    void commitDateOffset(const I16u& v);
    const I16u& commitDateOffset() const;

    virtual const Date commitDate() const = 0;

    void receiptDateOffset(const I16u& v);
    const I16u& receiptDateOffset() const;

    virtual const Date receiptDate() const = 0;

    void returnFlag(const Char& v);
    const Char& returnFlag() const;

    void lineStatus(const Char& v);
    const Char& lineStatus() const;

    void shipInstruct(const Enum& v);
    const Enum& shipInstruct() const;
    const String& shipInstructEnumValue() const;

    void shipMode(const Enum& v);
    const Enum& shipMode() const;
    const String& shipModeEnumValue() const;

    void comment(const String& v);
    const String& comment() const;

    void order(const AutoPtr<Order>& v);
    const AutoPtr<Order>& order() const;

    void partSupp(const AutoPtr<PartSupp>& v);
    const AutoPtr<PartSupp>& partSupp() const;

    void part(const AutoPtr<Part>& v);
    const AutoPtr<Part>& part() const;

protected:

    // fields
    I64u _order_key;
    I64u _part_key;
    I64u _supp_key;
    I16u _line_number;
    I16u _quantity;
    Decimal _discount;
    Decimal _tax;
    I16u _ship_date_offset;
    I16u _commit_date_offset;
    I16u _receipt_date_offset;
    Char _return_flag;
    Char _line_status;
    Enum _ship_instruct;
    Enum _ship_mode;
    String _comment;

    // references
    AutoPtr<Order> _order;
    AutoPtr<PartSupp> _part_supp;
    AutoPtr<Part> _part;

    // meta
    const LineitemMeta& _meta;
};

inline void BaseLineitem::orderKey(const I64u& v)
{
    _order_key = v;
}

inline const I64u& BaseLineitem::orderKey() const
{
    return _order_key;
}

inline void BaseLineitem::partKey(const I64u& v)
{
    _part_key = v;
}

inline const I64u& BaseLineitem::partKey() const
{
    return _part_key;
}

inline void BaseLineitem::suppKey(const I64u& v)
{
    _supp_key = v;
}

inline const I64u& BaseLineitem::suppKey() const
{
    return _supp_key;
}

inline void BaseLineitem::lineNumber(const I16u& v)
{
    _line_number = v;
}

inline const I16u& BaseLineitem::lineNumber() const
{
    return _line_number;
}

inline void BaseLineitem::quantity(const I16u& v)
{
    _quantity = v;
}

inline const I16u& BaseLineitem::quantity() const
{
    return _quantity;
}

inline void BaseLineitem::discount(const Decimal& v)
{
    _discount = v;
}

inline const Decimal& BaseLineitem::discount() const
{
    return _discount;
}

inline void BaseLineitem::tax(const Decimal& v)
{
    _tax = v;
}

inline const Decimal& BaseLineitem::tax() const
{
    return _tax;
}

inline void BaseLineitem::shipDateOffset(const I16u& v)
{
    _ship_date_offset = v;
}

inline const I16u& BaseLineitem::shipDateOffset() const
{
    return _ship_date_offset;
}

inline void BaseLineitem::commitDateOffset(const I16u& v)
{
    _commit_date_offset = v;
}

inline const I16u& BaseLineitem::commitDateOffset() const
{
    return _commit_date_offset;
}

inline void BaseLineitem::receiptDateOffset(const I16u& v)
{
    _receipt_date_offset = v;
}

inline const I16u& BaseLineitem::receiptDateOffset() const
{
    return _receipt_date_offset;
}

inline void BaseLineitem::returnFlag(const Char& v)
{
    _return_flag = v;
}

inline const Char& BaseLineitem::returnFlag() const
{
    return _return_flag;
}

inline void BaseLineitem::lineStatus(const Char& v)
{
    _line_status = v;
}

inline const Char& BaseLineitem::lineStatus() const
{
    return _line_status;
}

inline void BaseLineitem::shipInstruct(const Enum& v)
{
    _ship_instruct = v;
}

inline const Enum& BaseLineitem::shipInstruct() const
{
    return _ship_instruct;
}

inline const String& BaseLineitem::shipInstructEnumValue() const
{
    return _meta.ship_instruct[_ship_instruct];
}

inline void BaseLineitem::shipMode(const Enum& v)
{
    _ship_mode = v;
}

inline const Enum& BaseLineitem::shipMode() const
{
    return _ship_mode;
}

inline const String& BaseLineitem::shipModeEnumValue() const
{
    return _meta.ship_mode[_ship_mode];
}

inline void BaseLineitem::comment(const String& v)
{
    _comment = v;
}

inline const String& BaseLineitem::comment() const
{
    return _comment;
}

inline void BaseLineitem::order(const AutoPtr<Order>& v)
{
    _order = v;
}

inline const AutoPtr<Order>& BaseLineitem::order() const
{
    return _order;
}

inline void BaseLineitem::partSupp(const AutoPtr<PartSupp>& v)
{
    _part_supp = v;
}

inline const AutoPtr<PartSupp>& BaseLineitem::partSupp() const
{
    return _part_supp;
}

inline void BaseLineitem::part(const AutoPtr<Part>& v)
{
    _part = v;
}

inline const AutoPtr<Part>& BaseLineitem::part() const
{
    return _part;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Lineitem>
{
    typedef TPCHGen::LineitemMeta MetaType;
    typedef TPCHGen::LineitemGenerator GeneratorType;
    typedef TPCHGen::LineitemSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Lineitem> FactoryType;

    enum Field { UNKNOWN, GEN_ID, ORDER_KEY, PART_KEY, SUPP_KEY, LINE_NUMBER, QUANTITY, EXTENDED_PRICE, DISCOUNT, TAX, SHIP_DATE_OFFSET, SHIP_DATE, COMMIT_DATE_OFFSET, COMMIT_DATE, RECEIPT_DATE_OFFSET, RECEIPT_DATE, RETURN_FLAG, LINE_STATUS, SHIP_INSTRUCT, SHIP_MODE, COMMENT, ORDER, PART_SUPP, PART };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseLineitem>::serialize(std::ostream& out, const TPCHGen::BaseLineitem& record)
{
    write(out, record.orderKey(), false);
    out << '|';
    write(out, record.partKey(), false);
    out << '|';
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.lineNumber(), false);
    out << '|';
    write(out, record.quantity(), false);
    out << '|';
    write(out, record.extendedPrice(), false);
    out << '|';
    write(out, record.discount(), false);
    out << '|';
    write(out, record.tax(), false);
    out << '|';
    write(out, record.returnFlag(), false);
    out << '|';
    write(out, record.lineStatus(), false);
    out << '|';
    write(out, record.shipDate(), false);
    out << '|';
    write(out, record.commitDate(), false);
    out << '|';
    write(out, record.receiptDate(), false);
    out << '|';
    write(out, record.shipInstructEnumValue(), false);
    out << '|';
    write(out, record.shipModeEnumValue(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASELINEITEM_H_ */
