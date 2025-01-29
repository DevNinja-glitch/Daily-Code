import { useState } from "react"


function App() {
  let [counter, setCounter] = useState(15)
  const addValue =() =>{
    setCounter(counter+1)
  }
  const removeValue = () =>{
    setCounter(counter-1)
  }

  return (
    <>
      <h2>MY First Short React App</h2>
      <h4>I am again Here.</h4>
      <button onClick={addValue}>Add Value{counter}</button><br />
      <button onClick={removeValue}>Remove Value{counter}</button>
    </>
  )
 
}

export default App
