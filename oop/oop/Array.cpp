class Array
{
    private:
        int* m_data;
        int m_size;
    public:
        Array(int size) : m_size(size)
        {
            m_data = new int[size];
            for (int i = 0; i < size; ++i)
            {
                m_data[i] = 0;  // Initialize all elements to 0
            }
        }

        // Subscript Operator Overload
        const int& operator[](int index) const
        {
            return m_data[index];
        }

        // Copy Constructor
        Array(const Array& other) : m_size(other.m_size)
        {
            m_data = new int[m_size];
            for (int i = 0; i < m_size; ++i)
            {
                m_data[i] = other.m_data[i];
            }
        }

        // Destructor
        ~Array()
        {
            delete[] m_data;
        }
    };