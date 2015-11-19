// SparseBinaryDataVector.tcc

namespace dataset
{
    template<typename IntegerListType>
    template<typename IndexValueIteratorType, typename concept>
    SparseBinaryDataVectorBase<IntegerListType>::SparseBinaryDataVectorBase(IndexValueIteratorType&& indexValueIterator)
    {
        while(indexValueIterator.IsValid())
        {
            auto indexValue = indexValueIterator.GetValue();
            PushBack(indexValue.GetIndex(), indexValue.GetValue());
            indexValueIterator.Next();
        }
    }
}