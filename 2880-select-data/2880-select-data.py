import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    row = students['student_id'] == 101
    col = ['name' , 'age']
    return students.loc[row , col]
    